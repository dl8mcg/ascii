################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=
LINKER_SCRIPT_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS := 


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../ascii.c \
../main.c \
../SerProg.c \
../timer.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
ascii.o \
main.o \
SerProg.o \
timer.o

OBJS_AS_ARGS +=  \
ascii.o \
main.o \
SerProg.o \
timer.o

C_DEPS +=  \
ascii.d \
main.d \
SerProg.d \
timer.d

C_DEPS_AS_ARGS +=  \
ascii.d \
main.d \
SerProg.d \
timer.d

OUTPUT_FILE_PATH +=uC_ascii.elf

OUTPUT_FILE_PATH_AS_ARGS +=uC_ascii.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+= 

LINKER_SCRIPT_DEP+= 


# AVR32/GNU C Compiler
./ascii.o: .././ascii.c
	@echo Building file: $<
	@echo Invoking: XC8 C Compiler : 2.31
	$(QUOTE)C:\Program Files\Microchip\xc8\v2.31\bin\xc8-cc.exe$(QUOTE)  -mcpu=ATmega32  -mdfp="C:\Program Files (x86)\Atmel\Studio\7.0\Packs\Atmel\ATmega_DFP\2.0.401\xc8"  -c -x c -funsigned-char -funsigned-bitfields -mext=cci -D__ATmega32__ -DDEBUG  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

./main.o: .././main.c
	@echo Building file: $<
	@echo Invoking: XC8 C Compiler : 2.31
	$(QUOTE)C:\Program Files\Microchip\xc8\v2.31\bin\xc8-cc.exe$(QUOTE)  -mcpu=ATmega32  -mdfp="C:\Program Files (x86)\Atmel\Studio\7.0\Packs\Atmel\ATmega_DFP\2.0.401\xc8"  -c -x c -funsigned-char -funsigned-bitfields -mext=cci -D__ATmega32__ -DDEBUG  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

./SerProg.o: .././SerProg.c
	@echo Building file: $<
	@echo Invoking: XC8 C Compiler : 2.31
	$(QUOTE)C:\Program Files\Microchip\xc8\v2.31\bin\xc8-cc.exe$(QUOTE)  -mcpu=ATmega32  -mdfp="C:\Program Files (x86)\Atmel\Studio\7.0\Packs\Atmel\ATmega_DFP\2.0.401\xc8"  -c -x c -funsigned-char -funsigned-bitfields -mext=cci -D__ATmega32__ -DDEBUG  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

./timer.o: .././timer.c
	@echo Building file: $<
	@echo Invoking: XC8 C Compiler : 2.31
	$(QUOTE)C:\Program Files\Microchip\xc8\v2.31\bin\xc8-cc.exe$(QUOTE)  -mcpu=ATmega32  -mdfp="C:\Program Files (x86)\Atmel\Studio\7.0\Packs\Atmel\ATmega_DFP\2.0.401\xc8"  -c -x c -funsigned-char -funsigned-bitfields -mext=cci -D__ATmega32__ -DDEBUG  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	




# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP) $(LINKER_SCRIPT_DEP)
	@echo Building target: $@
	@echo Invoking:  XC8 C Linker : 2.31
	$(QUOTE)C:\Program Files\Microchip\xc8\v2.31\bin\xc8-cc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -mcpu=ATmega32  -mdfp="C:\Program Files (x86)\Atmel\Studio\7.0\Packs\Atmel\ATmega_DFP\2.0.401\xc8"  -Wl,-Map="uC_ascii.map" -funsigned-char -funsigned-bitfields -Wl,--start-group -Wl,-lm  -Wl,--end-group -Wl,--gc-sections -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums --memorysummary,memoryfile.xml  
	@echo Finished building target: $@
	"C:\Program Files\Microchip\xc8\v2.31\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  "uC_ascii.elf" "uC_ascii.hex"
	"C:\Program Files\Microchip\xc8\v2.31\bin\avr-objcopy.exe" -j .eeprom --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0 --no-change-warnings -O ihex "uC_ascii.elf" "uC_ascii.eep" || exit 0
	"C:\Program Files\Microchip\xc8\v2.31\bin\avr-objdump.exe" -h -S "uC_ascii.elf" > "uC_ascii.lss"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "uC_ascii.elf" "uC_ascii.hex" "uC_ascii.eep" "uC_ascii.map" "uC_ascii.usersignatures" "uC_ascii.a"  "uC_ascii.lss"
	