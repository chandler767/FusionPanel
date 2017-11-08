################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/Library/subdir.mk
-include src/Icons/subdir.mk
-include src/Hardware/subdir.mk
-include src/Fonts/subdir.mk
-include src/ASF/sam/utils/syscalls/gcc/subdir.mk
-include src/ASF/sam/utils/cmsis/sam4s/source/templates/gcc/subdir.mk
-include src/ASF/sam/utils/cmsis/sam4s/source/templates/subdir.mk
-include src/ASF/sam/services/flash_efc/subdir.mk
-include src/ASF/sam/drivers/wdt/subdir.mk
-include src/ASF/sam/drivers/uart/subdir.mk
-include src/ASF/sam/drivers/rstc/subdir.mk
-include src/ASF/sam/drivers/pwm/subdir.mk
-include src/ASF/sam/drivers/pmc/subdir.mk
-include src/ASF/sam/drivers/pio/subdir.mk
-include src/ASF/sam/drivers/matrix/subdir.mk
-include src/ASF/sam/drivers/efc/subdir.mk
-include src/ASF/common/utils/interrupt/subdir.mk
-include src/ASF/common/services/delay/sam/subdir.mk
-include src/ASF/common/services/clock/sam4s/subdir.mk
-include src/ASF/common/boards/user_board/subdir.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: PanelDue-v3-4.3.elf

# Tool invocations
PanelDue-v3-4.3.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Cross G++ Linker'
	arm-none-eabi-g++ -mthumb -static -mcpu=cortex-m4 --specs=nano.specs -Wl,--gc-sections -Wl,--fatal-warnings -TE:\PanelDue\PanelDue\src\ASF\sam\utils\linker_scripts\sam4s\sam4s4\gcc\flash.ld -Wl,--defsym,__stack_size__=0x1000 -Wl,-Map,E:\PanelDue\PanelDue\Release-v3-4.3/PanelDue-v3-4.3.map -o "PanelDue-v3-4.3.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(CC_DEPS)$(C++_DEPS)$(EXECUTABLES)$(OBJS)$(C_UPPER_DEPS)$(CXX_DEPS)$(C_DEPS)$(CPP_DEPS) PanelDue-v3-4.3.elf
	-@echo ' '

post-build:
	-arm-none-eabi-objcopy -O binary E:\PanelDue\PanelDue\Release-v3-4.3/PanelDue-v3-4.3.elf E:\PanelDue\PanelDue\Release-v3-4.3/PanelDue-v3-4.3.bin
	-@echo ' '

.PHONY: all clean dependents post-build

-include ../makefile.targets
