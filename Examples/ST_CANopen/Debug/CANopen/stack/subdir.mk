################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../CANopen/stack/CANopen.c 

OBJS += \
./CANopen/stack/CANopen.o 

C_DEPS += \
./CANopen/stack/CANopen.d 


# Each subdirectory must supply rules for building sources it contributes
CANopen/stack/%.o CANopen/stack/%.su CANopen/stack/%.cyclo: ../CANopen/stack/%.c CANopen/stack/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F303xE -c -I../Core/Inc -I../Drivers/STM32F3xx_HAL_Driver/Inc -I../Drivers/STM32F3xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F3xx/Include -I../Drivers/CMSIS/Include -I"D:/Workspace/Development/my/ST_CanBus/CANopen" -I"D:/Workspace/Development/my/ST_CanBus/CANopen/driver" -I"D:/Workspace/Development/my/ST_CanBus/CANopen/hardware" -I"D:/Workspace/Development/my/ST_CanBus/CANopen/stack" -I"D:/GithubRepos/__ENOSE_TOYOTA/ESP32/CANopenNode-Easy-Port/Examples/ST_CANopen/CANopen/driver" -I"D:/GithubRepos/__ENOSE_TOYOTA/ESP32/CANopenNode-Easy-Port/Examples/ST_CANopen/CANopen" -I"D:/GithubRepos/__ENOSE_TOYOTA/ESP32/CANopenNode-Easy-Port/Examples/ST_CANopen/CANopen/stack" -I"D:/GithubRepos/__ENOSE_TOYOTA/ESP32/CANopenNode-Easy-Port/Examples/ST_CANopen/CANopen/hardware" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-CANopen-2f-stack

clean-CANopen-2f-stack:
	-$(RM) ./CANopen/stack/CANopen.cyclo ./CANopen/stack/CANopen.d ./CANopen/stack/CANopen.o ./CANopen/stack/CANopen.su

.PHONY: clean-CANopen-2f-stack

