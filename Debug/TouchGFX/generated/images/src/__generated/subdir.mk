################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_icon_round_tiny_fill_active.cpp \
../TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_icon_round_tiny_fill_pressed.cpp \
../TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_gauge_tiny_backgrounds_light.cpp \
../TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_gauge_tiny_needles_rough.cpp \
../TouchGFX/generated/images/src/__generated/image_icon_theme_images_hardware_keyboard_arrow_left_50_50_E8F6FB.svg.cpp 

OBJS += \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_icon_round_tiny_fill_active.o \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_icon_round_tiny_fill_pressed.o \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_gauge_tiny_backgrounds_light.o \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_gauge_tiny_needles_rough.o \
./TouchGFX/generated/images/src/__generated/image_icon_theme_images_hardware_keyboard_arrow_left_50_50_E8F6FB.svg.o 

CPP_DEPS += \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_icon_round_tiny_fill_active.d \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_icon_round_tiny_fill_pressed.d \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_gauge_tiny_backgrounds_light.d \
./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_gauge_tiny_needles_rough.d \
./TouchGFX/generated/images/src/__generated/image_icon_theme_images_hardware_keyboard_arrow_left_50_50_E8F6FB.svg.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/generated/images/src/__generated/%.o TouchGFX/generated/images/src/__generated/%.su TouchGFX/generated/images/src/__generated/%.cyclo: ../TouchGFX/generated/images/src/__generated/%.cpp TouchGFX/generated/images/src/__generated/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -DUSE_FULL_LL_DRIVER -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-generated-2f-images-2f-src-2f-__generated

clean-TouchGFX-2f-generated-2f-images-2f-src-2f-__generated:
	-$(RM) ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_icon_round_tiny_fill_active.cyclo ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_icon_round_tiny_fill_active.d ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_icon_round_tiny_fill_active.o ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_icon_round_tiny_fill_active.su ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_icon_round_tiny_fill_pressed.cyclo ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_icon_round_tiny_fill_pressed.d ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_icon_round_tiny_fill_pressed.o ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_button_icon_round_tiny_fill_pressed.su ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_gauge_tiny_backgrounds_light.cyclo ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_gauge_tiny_backgrounds_light.d ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_gauge_tiny_backgrounds_light.o ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_gauge_tiny_backgrounds_light.su ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_gauge_tiny_needles_rough.cyclo ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_gauge_tiny_needles_rough.d ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_gauge_tiny_needles_rough.o ./TouchGFX/generated/images/src/__generated/image_alternate_theme_images_widgets_gauge_tiny_needles_rough.su ./TouchGFX/generated/images/src/__generated/image_icon_theme_images_hardware_keyboard_arrow_left_50_50_E8F6FB.svg.cyclo ./TouchGFX/generated/images/src/__generated/image_icon_theme_images_hardware_keyboard_arrow_left_50_50_E8F6FB.svg.d ./TouchGFX/generated/images/src/__generated/image_icon_theme_images_hardware_keyboard_arrow_left_50_50_E8F6FB.svg.o ./TouchGFX/generated/images/src/__generated/image_icon_theme_images_hardware_keyboard_arrow_left_50_50_E8F6FB.svg.su

.PHONY: clean-TouchGFX-2f-generated-2f-images-2f-src-2f-__generated

