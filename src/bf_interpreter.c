#include <stdio.h>
#include <stdlib.h>

#define TAPE_SIZE 30000

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <program.bf>\n", argv[0]);
        return 1;
    }

    // 1. Open source file
    FILE *fp = fopen(argv[1], "r");
    if (!fp) {
        perror("Error opening Brainfuck file");
        return 1;
    }

    // 2. Read entire program into memory
    fseek(fp, 0, SEEK_END);
    long code_size = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    char *code = (char *)malloc(code_size + 1);
    if (!code) {
        fprintf(stderr, "Memory allocation error\n");
        fclose(fp);
        return 1;
    }
    fread(code, 1, code_size, fp);
    fclose(fp);
    code[code_size] = '\0';

    // 3. Initialize 30,000-cell tape and pointers
    unsigned char tape[TAPE_SIZE] = {0};
    unsigned char *ptr = tape;
    long ip = 0; // Instruction Pointer

    // 4. Execution loop for the 8 opcodes
    while (ip < code_size) {
        switch (code[ip]) {
            case '>': ++ptr; break;
            case '<': --ptr; break;
            case '+': ++(*ptr); break;
            case '-': --(*ptr); break;
            case '.': putchar(*ptr); break;
            case ',': *ptr = (unsigned char)getchar(); break;
            case '[':
                if (*ptr == 0) {
                    int depth = 1;
                    while (depth > 0 && ip < code_size - 1) {
                        ip++;
                        if (code[ip] == '[') depth++;
                        else if (code[ip] == ']') depth--;
                    }
                }
                break;
            case ']':
                if (*ptr != 0) {
                    int depth = 1;
                    while (depth > 0 && ip > 0) {
                        ip--;
                        if (code[ip] == ']') depth++;
                        else if (code[ip] == '[') depth--;
                    }
                }
                break;
        }
        ip++;
    }

    free(code);
    return 0;
}
