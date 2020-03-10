################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Assign6Q1.cpp \
../src/Book.cpp \
../src/Product.cpp \
../src/Tape.cpp 

OBJS += \
./src/Assign6Q1.o \
./src/Book.o \
./src/Product.o \
./src/Tape.o 

CPP_DEPS += \
./src/Assign6Q1.d \
./src/Book.d \
./src/Product.d \
./src/Tape.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


