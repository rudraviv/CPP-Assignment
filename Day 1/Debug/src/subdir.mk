################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ClassStructure.cpp \
../src/Day\ 1.cpp \
../src/ScopeRes.cpp \
../src/class1.cpp 

OBJS += \
./src/ClassStructure.o \
./src/Day\ 1.o \
./src/ScopeRes.o \
./src/class1.o 

CPP_DEPS += \
./src/ClassStructure.d \
./src/Day\ 1.d \
./src/ScopeRes.d \
./src/class1.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Day\ 1.o: ../src/Day\ 1.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Day 1.d" -MT"src/Day\ 1.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


