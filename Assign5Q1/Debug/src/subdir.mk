################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Assign5Q1.cpp \
../src/Date.cpp \
../src/Employee.cpp \
../src/Person.cpp 

OBJS += \
./src/Assign5Q1.o \
./src/Date.o \
./src/Employee.o \
./src/Person.o 

CPP_DEPS += \
./src/Assign5Q1.d \
./src/Date.d \
./src/Employee.d \
./src/Person.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


