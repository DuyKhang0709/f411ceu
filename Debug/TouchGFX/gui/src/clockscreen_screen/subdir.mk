################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/gui/src/clockscreen_screen/ClockScreenPresenter.cpp \
../TouchGFX/gui/src/clockscreen_screen/ClockScreenView.cpp 

OBJS += \
./TouchGFX/gui/src/clockscreen_screen/ClockScreenPresenter.o \
./TouchGFX/gui/src/clockscreen_screen/ClockScreenView.o 

CPP_DEPS += \
./TouchGFX/gui/src/clockscreen_screen/ClockScreenPresenter.d \
./TouchGFX/gui/src/clockscreen_screen/ClockScreenView.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/gui/src/clockscreen_screen/%.o TouchGFX/gui/src/clockscreen_screen/%.su TouchGFX/gui/src/clockscreen_screen/%.cyclo: ../TouchGFX/gui/src/clockscreen_screen/%.cpp TouchGFX/gui/src/clockscreen_screen/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -DUSE_FULL_LL_DRIVER -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-gui-2f-src-2f-clockscreen_screen

clean-TouchGFX-2f-gui-2f-src-2f-clockscreen_screen:
	-$(RM) ./TouchGFX/gui/src/clockscreen_screen/ClockScreenPresenter.cyclo ./TouchGFX/gui/src/clockscreen_screen/ClockScreenPresenter.d ./TouchGFX/gui/src/clockscreen_screen/ClockScreenPresenter.o ./TouchGFX/gui/src/clockscreen_screen/ClockScreenPresenter.su ./TouchGFX/gui/src/clockscreen_screen/ClockScreenView.cyclo ./TouchGFX/gui/src/clockscreen_screen/ClockScreenView.d ./TouchGFX/gui/src/clockscreen_screen/ClockScreenView.o ./TouchGFX/gui/src/clockscreen_screen/ClockScreenView.su

.PHONY: clean-TouchGFX-2f-gui-2f-src-2f-clockscreen_screen

