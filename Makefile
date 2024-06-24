CPRE := @
ifeq ($(V),1)
CPRE :=
VERB := --verbose
endif

.PHONY:startup
startup: all

all:
	@echo "Build Solution by $(BOARD) "
	$(CPRE) scons $(VERB) --board=$(BOARD) $(MULTITHREADS) $(MAKEFLAGS)
	@echo AOS SDK Done

sdk:
	$(CPRE) aos sdk

.PHONY:clean
clean:
	$(CPRE) scons -c --board=$(BOARD)
	$(CPRE) find . -name "*.[od]" -delete
	$(CPRE) rm -rf aos_sdk aos.elf aos.map aos.bin generated out
