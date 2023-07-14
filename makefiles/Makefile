# Makefile

# Compiler
CC := gcc

# Compiler flags
CFLAGS := -Wall -pedantic -Werror -Wextra -std=gnu89

# Prompt for the file to compile
.PHONY: all
all:
	@read -p "Enter the filename to compile: " filename; \
	$(CC) $(CFLAGS) -o output "$$filename"

