################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"D:/Programme/TI/CCS/920/ccs/tools/compiler/ti-cgt-arm_19.6.0.STS/bin/armcl" -mv7M4 --code_state=16 --float_support=none -me -Ooff --include_path="D:/CCS Workspaces/Toniebox/spi_demo" --include_path="D:/CCS Workspaces/Toniebox/spi_demo/Hardware" --include_path="D:/CCS Workspaces/Toniebox/spi_demo/NFC" --include_path="D:/Programme/TI/CC3200SDK/1.5.0/cc3200-sdk/" --include_path="D:/Programme/TI/CC3200SDK/1.5.0/cc3200-sdk/driverlib/" --include_path="D:/Programme/TI/CC3200SDK/1.5.0/cc3200-sdk/inc/" --include_path="D:/Programme/TI/CC3200SDK/1.5.0/cc3200-sdk/example/common/" --include_path="D:/Programme/TI/CCS/920/ccs/tools/compiler/ti-cgt-arm_19.6.0.STS/include" --define=ccs --define=cc3200 -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

startup_ccs.obj: D:/Programme/TI/CC3200SDK/1.5.0/cc3200-sdk/example/common/startup_ccs.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"D:/Programme/TI/CCS/920/ccs/tools/compiler/ti-cgt-arm_19.6.0.STS/bin/armcl" -mv7M4 --code_state=16 --float_support=none -me -Ooff --include_path="D:/CCS Workspaces/Toniebox/spi_demo" --include_path="D:/CCS Workspaces/Toniebox/spi_demo/Hardware" --include_path="D:/CCS Workspaces/Toniebox/spi_demo/NFC" --include_path="D:/Programme/TI/CC3200SDK/1.5.0/cc3200-sdk/" --include_path="D:/Programme/TI/CC3200SDK/1.5.0/cc3200-sdk/driverlib/" --include_path="D:/Programme/TI/CC3200SDK/1.5.0/cc3200-sdk/inc/" --include_path="D:/Programme/TI/CC3200SDK/1.5.0/cc3200-sdk/example/common/" --include_path="D:/Programme/TI/CCS/920/ccs/tools/compiler/ti-cgt-arm_19.6.0.STS/include" --define=ccs --define=cc3200 -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="startup_ccs.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


