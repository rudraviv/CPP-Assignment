################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Day\ 3.cpp \
../src/test_impl.cpp 

OBJS += \
./src/Day\ 3.o \
./src/test_impl.o 

CPP_DEPS += \
./src/Day\ 3.d \
./src/test_impl.d 


# Each subdirectory must supply rules for building sources it contributes
src/Day\ 3.o: ../src/Day\ 3.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Day 3.d" -MT"src/Day\ 3.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


