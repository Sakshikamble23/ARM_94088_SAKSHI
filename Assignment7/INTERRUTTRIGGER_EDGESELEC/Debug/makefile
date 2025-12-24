################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32F4xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := INTERRUTTRIGGER_EDGESELEC
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
INTERRUTTRIGGER_EDGESELEC.elf \

MAP_FILES += \
INTERRUTTRIGGER_EDGESELEC.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
INTERRUTTRIGGER_EDGESELEC.list \


# All Target
all: main-build

# Main-build Target
main-build: INTERRUTTRIGGER_EDGESELEC.elf secondary-outputs

# Tool invocations
INTERRUTTRIGGER_EDGESELEC.elf INTERRUTTRIGGER_EDGESELEC.map: $(OBJS) $(USER_OBJS) C:\Users\sanket\ mirage\OneDrive\Desktop\Intenshipdata\ARM_94088_SAKSHI\Assignment7\INTERRUTTRIGGER_EDGESELEC\STM32F407VGTX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "INTERRUTTRIGGER_EDGESELEC.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"C:\Users\sanket mirage\OneDrive\Desktop\Intenshipdata\ARM_94088_SAKSHI\Assignment7\INTERRUTTRIGGER_EDGESELEC\STM32F407VGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="INTERRUTTRIGGER_EDGESELEC.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

INTERRUTTRIGGER_EDGESELEC.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "INTERRUTTRIGGER_EDGESELEC.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) INTERRUTTRIGGER_EDGESELEC.elf INTERRUTTRIGGER_EDGESELEC.list INTERRUTTRIGGER_EDGESELEC.map default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
