# File: Makefile

SRC = main.c
PREP = main.i
ASM = main.s
OBJ = main.o
BIN = main

# Default target: build everything
all: $(BIN)

# Step 1: Preprocessing
$(PREP): $(SRC)
	gcc -E -o $(PREP) $(SRC)

# Step 2: Compilation to Assembly
$(ASM): $(PREP)
	gcc -S -o $(ASM) $(PREP)

# Step 3: Assembly to Object File
$(OBJ): $(ASM)
	gcc -c -o $(OBJ) $(ASM)

# Step 4: Linking to Executable
$(BIN): $(OBJ)
	gcc -o $(BIN) $(OBJ)

# Clean up all generated files
clean:
	rm -f $(PREP) $(ASM) $(OBJ) $(BIN)
