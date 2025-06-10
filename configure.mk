configure:
	@echo -n "SRCS = " > $(MKSRCS)
	@for i in $$(find $(SRCS_DIR) -type f -name "*.c");\
	do\
		echo $$i\\ >> $(MKSRCS);\
	done;
	@echo -n "HEADERS = " > $(MKHEADERS)
	@for i in $$(find $(HEADERS_DIR) -type d);\
	do\
		echo $$i\\ >> $(MKHEADERS);\
	done;
	@echo -e $(FGREEN)Done$(RESET)