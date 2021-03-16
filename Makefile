.PHONY: clean All

All:
	@echo "----------Building project:[ Lab_12 - Debug ]----------"
	@cd "Lab_12" && "$(MAKE)" -f  "Lab_12.mk"
clean:
	@echo "----------Cleaning project:[ Lab_12 - Debug ]----------"
	@cd "Lab_12" && "$(MAKE)" -f  "Lab_12.mk" clean
