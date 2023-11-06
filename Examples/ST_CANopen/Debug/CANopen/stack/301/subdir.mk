################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../CANopen/stack/301/CO_Emergency.c \
../CANopen/stack/301/CO_HBconsumer.c \
../CANopen/stack/301/CO_NMT_Heartbeat.c \
../CANopen/stack/301/CO_ODinterface.c \
../CANopen/stack/301/CO_PDO.c \
../CANopen/stack/301/CO_SDOclient.c \
../CANopen/stack/301/CO_SDOserver.c \
../CANopen/stack/301/CO_SYNC.c \
../CANopen/stack/301/CO_TIME.c \
../CANopen/stack/301/CO_fifo.c \
../CANopen/stack/301/crc16-ccitt.c 

OBJS += \
./CANopen/stack/301/CO_Emergency.o \
./CANopen/stack/301/CO_HBconsumer.o \
./CANopen/stack/301/CO_NMT_Heartbeat.o \
./CANopen/stack/301/CO_ODinterface.o \
./CANopen/stack/301/CO_PDO.o \
./CANopen/stack/301/CO_SDOclient.o \
./CANopen/stack/301/CO_SDOserver.o \
./CANopen/stack/301/CO_SYNC.o \
./CANopen/stack/301/CO_TIME.o \
./CANopen/stack/301/CO_fifo.o \
./CANopen/stack/301/crc16-ccitt.o 

C_DEPS += \
./CANopen/stack/301/CO_Emergency.d \
./CANopen/stack/301/CO_HBconsumer.d \
./CANopen/stack/301/CO_NMT_Heartbeat.d \
./CANopen/stack/301/CO_ODinterface.d \
./CANopen/stack/301/CO_PDO.d \
./CANopen/stack/301/CO_SDOclient.d \
./CANopen/stack/301/CO_SDOserver.d \
./CANopen/stack/301/CO_SYNC.d \
./CANopen/stack/301/CO_TIME.d \
./CANopen/stack/301/CO_fifo.d \
./CANopen/stack/301/crc16-ccitt.d 


# Each subdirectory must supply rules for building sources it contributes
CANopen/stack/301/%.o CANopen/stack/301/%.su CANopen/stack/301/%.cyclo: ../CANopen/stack/301/%.c CANopen/stack/301/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F303xE -c -I../Core/Inc -I../Drivers/STM32F3xx_HAL_Driver/Inc -I../Drivers/STM32F3xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F3xx/Include -I../Drivers/CMSIS/Include -I"D:/Workspace/Development/my/ST_CanBus/CANopen" -I"D:/Workspace/Development/my/ST_CanBus/CANopen/driver" -I"D:/Workspace/Development/my/ST_CanBus/CANopen/hardware" -I"D:/Workspace/Development/my/ST_CanBus/CANopen/stack" -I"D:/GithubRepos/__ENOSE_TOYOTA/ESP32/CANopenNode-Easy-Port/Examples/ST_CANopen/CANopen/driver" -I"D:/GithubRepos/__ENOSE_TOYOTA/ESP32/CANopenNode-Easy-Port/Examples/ST_CANopen/CANopen" -I"D:/GithubRepos/__ENOSE_TOYOTA/ESP32/CANopenNode-Easy-Port/Examples/ST_CANopen/CANopen/stack" -I"D:/GithubRepos/__ENOSE_TOYOTA/ESP32/CANopenNode-Easy-Port/Examples/ST_CANopen/CANopen/hardware" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-CANopen-2f-stack-2f-301

clean-CANopen-2f-stack-2f-301:
	-$(RM) ./CANopen/stack/301/CO_Emergency.cyclo ./CANopen/stack/301/CO_Emergency.d ./CANopen/stack/301/CO_Emergency.o ./CANopen/stack/301/CO_Emergency.su ./CANopen/stack/301/CO_HBconsumer.cyclo ./CANopen/stack/301/CO_HBconsumer.d ./CANopen/stack/301/CO_HBconsumer.o ./CANopen/stack/301/CO_HBconsumer.su ./CANopen/stack/301/CO_NMT_Heartbeat.cyclo ./CANopen/stack/301/CO_NMT_Heartbeat.d ./CANopen/stack/301/CO_NMT_Heartbeat.o ./CANopen/stack/301/CO_NMT_Heartbeat.su ./CANopen/stack/301/CO_ODinterface.cyclo ./CANopen/stack/301/CO_ODinterface.d ./CANopen/stack/301/CO_ODinterface.o ./CANopen/stack/301/CO_ODinterface.su ./CANopen/stack/301/CO_PDO.cyclo ./CANopen/stack/301/CO_PDO.d ./CANopen/stack/301/CO_PDO.o ./CANopen/stack/301/CO_PDO.su ./CANopen/stack/301/CO_SDOclient.cyclo ./CANopen/stack/301/CO_SDOclient.d ./CANopen/stack/301/CO_SDOclient.o ./CANopen/stack/301/CO_SDOclient.su ./CANopen/stack/301/CO_SDOserver.cyclo ./CANopen/stack/301/CO_SDOserver.d ./CANopen/stack/301/CO_SDOserver.o ./CANopen/stack/301/CO_SDOserver.su ./CANopen/stack/301/CO_SYNC.cyclo ./CANopen/stack/301/CO_SYNC.d ./CANopen/stack/301/CO_SYNC.o ./CANopen/stack/301/CO_SYNC.su ./CANopen/stack/301/CO_TIME.cyclo ./CANopen/stack/301/CO_TIME.d ./CANopen/stack/301/CO_TIME.o ./CANopen/stack/301/CO_TIME.su ./CANopen/stack/301/CO_fifo.cyclo ./CANopen/stack/301/CO_fifo.d ./CANopen/stack/301/CO_fifo.o ./CANopen/stack/301/CO_fifo.su ./CANopen/stack/301/crc16-ccitt.cyclo ./CANopen/stack/301/crc16-ccitt.d ./CANopen/stack/301/crc16-ccitt.o ./CANopen/stack/301/crc16-ccitt.su

.PHONY: clean-CANopen-2f-stack-2f-301

