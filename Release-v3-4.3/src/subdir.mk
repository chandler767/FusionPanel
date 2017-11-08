################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ColourSchemes.cpp \
../src/Display.cpp \
../src/FileManager.cpp \
../src/MessageLog.cpp \
../src/PanelDue.cpp \
../src/Print.cpp \
../src/RequestTimer.cpp \
../src/UserInterface.cpp 

OBJS += \
./src/ColourSchemes.o \
./src/Display.o \
./src/FileManager.o \
./src/MessageLog.o \
./src/PanelDue.o \
./src/Print.o \
./src/RequestTimer.o \
./src/UserInterface.o 

CPP_DEPS += \
./src/ColourSchemes.d \
./src/Display.d \
./src/FileManager.d \
./src/MessageLog.d \
./src/PanelDue.d \
./src/Print.d \
./src/RequestTimer.d \
./src/UserInterface.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	arm-none-eabi-g++ -DNDEBUG -D__SAM4S4B__ -DBOARD=USER_BOARD -DARM_MATH_CM4=true -DSCREEN_43 -I"E:\PanelDue\FusionPanel\src\config" -I"E:\PanelDue\FusionPanel\src\ASF\thirdparty\CMSIS\Lib\GCC" -I"E:\PanelDue\FusionPanel\src\ASF\sam\utils\cmsis\sam4s\include" -I"E:\PanelDue\FusionPanel\src\ASF\common\utils" -I"E:\PanelDue\FusionPanel\src" -I"E:\PanelDue\FusionPanel\src\ASF\sam\utils\cmsis\sam4s\source\templates" -I"E:\PanelDue\FusionPanel\src\ASF\sam\utils" -I"E:\PanelDue\FusionPanel\src\ASF\sam\utils\preprocessor" -I"E:\PanelDue\FusionPanel\src\ASF\common\boards" -I"E:\PanelDue\FusionPanel\src\ASF\sam\utils\header_files" -I"E:\PanelDue\FusionPanel\src\ASF\common\boards\user_board" -I"E:\PanelDue\FusionPanel\src\ASF\thirdparty\CMSIS\Include" -I"E:\PanelDue\FusionPanel\src\ASF\sam\drivers\pio" -I"E:\PanelDue\FusionPanel\src\ASF\sam\drivers\pmc" -I"E:\PanelDue\FusionPanel\src\ASF\common\services\clock" -I"E:\PanelDue\FusionPanel\src\ASF\common\services\delay" -I"E:\PanelDue\FusionPanel\src\ASF\sam\drivers\wdt" -I"E:\PanelDue\FusionPanel\src\ASF\sam\drivers\pwm" -I"E:\PanelDue\FusionPanel\src\ASF\sam\drivers\uart" -I"E:\PanelDue\FusionPanel\src\ASF\sam\drivers\matrix" -I"E:\PanelDue\FusionPanel\src\ASF\sam\drivers\efc" -I"E:\PanelDue\FusionPanel\src\ASF\sam\services\flash_efc" -I"E:\PanelDue\FusionPanel\src\ASF\sam\drivers\rstc" -Os -Wall -Wextra -c -std=gnu++11 -mthumb -MD -MP -mcpu=cortex-m3 -ffunction-sections -fdata-sections -fno-threadsafe-statics -fno-rtti -fno-exceptions -nostdlib --param max-inline-insns-single=500 -mlong-calls -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


