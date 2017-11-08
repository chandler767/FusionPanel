################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/ASF/common/services/delay/sam/cycle_counter.c 

OBJS += \
./src/ASF/common/services/delay/sam/cycle_counter.o 

C_DEPS += \
./src/ASF/common/services/delay/sam/cycle_counter.d 


# Each subdirectory must supply rules for building sources it contributes
src/ASF/common/services/delay/sam/%.o: ../src/ASF/common/services/delay/sam/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	arm-none-eabi-gcc -DNDEBUG -D__SAM4S4B__ -DBOARD=USER_BOARD -DARM_MATH_CM4=true -I"E:\PanelDue\FusionPanel\src\config" -I"E:\PanelDue\FusionPanel\src\ASF\thirdparty\CMSIS\Lib\GCC" -I"E:\PanelDue\FusionPanel\src\ASF\sam\utils\cmsis\sam4s\include" -I"E:\PanelDue\FusionPanel\src\ASF\common\utils" -I"E:\PanelDue\FusionPanel\src" -I"E:\PanelDue\FusionPanel\src\ASF\sam\utils\cmsis\sam4s\source\templates" -I"E:\PanelDue\FusionPanel\src\ASF\sam\utils" -I"E:\PanelDue\FusionPanel\src\ASF\sam\utils\preprocessor" -I"E:\PanelDue\FusionPanel\src\ASF\common\boards" -I"E:\PanelDue\FusionPanel\src\ASF\sam\utils\header_files" -I"E:\PanelDue\FusionPanel\src\ASF\common\boards\user_board" -I"E:\PanelDue\FusionPanel\src\ASF\thirdparty\CMSIS\Include" -I"E:\PanelDue\FusionPanel\src\ASF\sam\drivers\pio" -I"E:\PanelDue\FusionPanel\src\ASF\sam\drivers\pmc" -I"E:\PanelDue\FusionPanel\src\ASF\common\services\clock" -I"E:\PanelDue\FusionPanel\src\ASF\common\services\delay" -I"E:\PanelDue\FusionPanel\src\ASF\sam\drivers\wdt" -I"E:\PanelDue\FusionPanel\src\ASF\sam\drivers\pwm" -I"E:\PanelDue\FusionPanel\src\ASF\sam\drivers\uart" -I"E:\PanelDue\FusionPanel\src\ASF\sam\drivers\matrix" -I"E:\PanelDue\FusionPanel\src\ASF\sam\drivers\efc" -I"E:\PanelDue\FusionPanel\src\ASF\sam\drivers\rstc" -I"E:\PanelDue\FusionPanel\src\ASF\sam\services\flash_efc" -Os -Wall -c -std=gnu99 -mthumb -MD -MP -mcpu=cortex-m3 -ffunction-sections -fdata-sections -nostdlib --param max-inline-insns-single=500 -mlong-calls -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


