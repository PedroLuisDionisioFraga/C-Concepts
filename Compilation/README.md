# What Steps Are Involved in GCC Compilation?
GCC compilation happens in four major stages:

| Stage |	Output File |	GCC Flag | Description |
| ----- | ----------- | -------- | ----------- |
| Preprocessing | `.i` or `.exp.c` | -E | Handles #include, #define, etc. |
| Compilation | `.s` (assembly code) | -S | Converts C to Assembly |
| Assembly | `.o` (object file) | -c | Converts Assembly to machine code |
| Linking |	executable (e.g., a.out) | (default) | Links object files into binary |

## Compile a File in Each Individual Step
1.  Preprocessing
    ```bash
    gcc -E -o main.i main.c
    ```
    Output: 008_sample_exp.c\
    This file contains the C code after all #include, #define, and macros are expanded.\
    You can view it with:
    ```bash
    less 008_sample_exp.c
    ```
2. Compilation (to Assembly)
    ```bash
    gcc -S -o main.s main.i
    ```
    Output: main.s\
    This is assembly code generated from the preprocessed C source.\
    You can view it with:
    ```bash
    less main.s
    ```
3. Assembly (to Object File)
    ```bash
    gcc -c -o main.o main.s
    ```
    Output: main.o\
    This is a machine code object file. You can inspect it with:
    ```bash
    file main.o
    ```
4. Linking (to Executable)
    ```bash
    gcc -o main main.o
    ```
    Output: main\
    This is the final executable file. You can run it with:
    ```bash
    ./main
    ```

## Summary of File Pipeline
```plaintext
main.c            ← Original source
   ↓ -E
main.i        ← Preprocessed C code
   ↓ -S
main.s        ← Assembly code
   ↓ -c
main.o        ← Object file (machine code)
   ↓ linking
main              ← Final executable
```

## Make
You can automate this process using a Makefile. Here's a simple example:
```shell
make
```
This will compile the `main.c` file through all stages and produce the executable `main`.\
Run the executable with:
```bash
./main
```
