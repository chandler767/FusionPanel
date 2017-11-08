################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Hardware/Buzzer.cpp \
../src/Hardware/FlashStorage.cpp \
../src/Hardware/Mem.cpp \
../src/Hardware/OneBitPort.cpp \
../src/Hardware/SerialIo.cpp \
../src/Hardware/SysTick.cpp \
../src/Hardware/UTFT.cpp \
../src/Hardware/UTouch.cpp 

OBJS += \
./src/Hardware/Buzzer.o \
./src/Hardware/FlashStorage.o \
./src/Hardware/Mem.o \
./src/Hardware/OneBitPort.o \
./src/Hardware/SerialIo.o \
./src/Hardware/SysTick.o \
./src/Hardware/UTFT.o \
./src/Hardware/UTouch.o 

CPP_DEPS += \
./src/Hardware/Buzzer.d \
./src/Hardware/FlashStorage.d \
./src/Hardware/Mem.d \
./src/Hardware/OneBitPort.d \
./src/Hardware/SerialIo.d \
./src/Hardware/SysTick.d \
./src/Hardware/UTFT.d \
./src/Hardware/UTouch.d 


# Each subdirectory must supply rules for building sources it contributes
src/Hardware/%.o: ../src/Hardware/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	arm-none-eabi-g++ -DNDEBUG -D__SAM4S4B__ -DBOARD=USER_BOARD -DARM_MATH_CM4=true -DSCREEN_43 -I"E:\PanelDue\FusionPanel\src\config" -I"E:\PanelDue\FusionPanel\src\ASF\thirdparty\CMSIS\Lib\GCC" -I"E:\PanelDue\FusionPanel\src\ASF\sam\utils\cmsis\sam4s\include" -I"E:\PanelDue\FusionPanel\src\ASF\common\utils" -I"E:\PanelDue\FusionPanel\src" -I"E:\PanelDue\FusionPanel\src\ASF\sam\utils\cmsis\sam4s\source\templates" -I"E:\PanelDue\FusionPanel\src\ASF\sam\utils" -I"E:\PanelDue\FusionPanel\src\ASF\sam\utils\preprocessor" -I"E:\PanelDue\FusionPanel\src\ASF\common\boards" -I"E:\PanelDue\FusionPanel\src\ASF\sam\utils\header_files" -I"E:\PanelDue\FusionPanel\src\ASF\common\boards\user_board" -I"E:\PanelDue\FusionPanel\src\ASF\thirdparty\CMSIS\Include" -I"E:\PanelDue\FusionPanel\src\ASF\sam\drivers\pio" -I"E:\PanelDue\FusionPanel\src\ASF\sam\drivers\pmc" -I"E:\PanelDue\FusionPanel\src\ASF\common\services\clock" -I"E:\PanelDue\FusionPanel\src\ASF\common\services\delay" -I"E:\PanelDue\FusionPanel\src\ASF\sam\drivers\wdt" -I"E:\PanelDue\FusionPanel\src\ASF\sam\drivers\pwm" -I"E:\PanelDue\FusionPanel\src\ASF\sam\drivers\uart" -I"E:\PanelDue\FusionPanel\src\ASF\sam\drivers\matrix" -I"E:\PanelDue\FusionPanel\src\ASF\sam\drivers\efc" -I"E:\PanelDue\FusionPanel\src\ASF\sam\services\flash_efc" -I"E:\PanelDue\FusionPanel\src\ASF\sam\drivers\rstc" -Os -Wall -Wextra -c -std=gnu++11 -mthumb -MD -MP -mcpu=cortex-m3 -ffunction-sections -fdata-sections -fno-threadsafe-statics -fno-rtti -fno-exceptions -nostdlib --param max-inline-insns-single=500 -mlong-calls -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


