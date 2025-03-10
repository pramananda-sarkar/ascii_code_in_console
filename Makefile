# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -g -I./src/header

# Directories
SRC_DIR = ./src
CODE_DIR = $(SRC_DIR)/code
HEADERS_DIR = $(SRC_DIR)/header
OBJ_DIR = ./obj
BIN_DIR = ./bin

# Source files (add new .c files here)
SRC = $(SRC_DIR)/main.c \
      $(CODE_DIR)/symbol.c \
      $(CODE_DIR)/helper.c

# Object files (automatically generated from SRC and placed in OBJ_DIR)
OBJ = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

# Executable name (output binary)
TARGET = my_program

# Default target
all: $(OBJ_DIR) $(BIN_DIR) $(BIN_DIR)/$(TARGET)

# Create the obj and bin directories and their subdirectories if they don't exist
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)/code  # Add more subdirectories if needed

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# Rule to build the executable and place it in the bin directory
$(BIN_DIR)/$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$(TARGET) $(OBJ)

# Rule to compile .c files to .o files in the obj directory
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)  # Create the target directory if it doesn't exist
	$(CC) $(CFLAGS) -c $< -o $@

# Run the program from the bin directory
run: $(BIN_DIR)/$(TARGET)
	$(BIN_DIR)/$(TARGET)

# Clean up build files
clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

# Install the binary to /usr/local/bin (optional)
install: $(BIN_DIR)/$(TARGET)
	sudo cp $(BIN_DIR)/$(TARGET) /usr/local/bin/$(TARGET)

# Uninstall the binary (optional)
uninstall:
	sudo rm -f /usr/local/bin/$(TARGET)

# Phony targets
.PHONY: all clean install uninstall run