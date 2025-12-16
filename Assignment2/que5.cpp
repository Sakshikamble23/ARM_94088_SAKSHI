#include <stdio.h>
int main()
 {
    unsigned int reg = 0xAA; 
    unsigned int  original_reg = reg;
    unsigned int  mask = 0x1C; 
    unsigned int  read_value = (reg & mask) >> 2;
    printf("Original register value: 0x%X (Binary: ", original_reg);
    for (int i = 7; i >= 0; i--) {
        printf("%d", (original_reg >> i) & 1);
    }
    printf(")\n");
    printf("Value of bits 2 to 4: %d (Binary: ", read_value);
    for (int i = 2; i >= 0; i--) {
        printf("%d", (read_value >> i) & 1);
    }
    printf(")\n\n");
    unsigned int  value_to_write = 0b011;
    reg = reg & (~mask);
    reg = reg | (value_to_write << 2);
    printf("Modified register value: 0x%X (Binary: ", reg);
    for (int i = 7; i >= 0; i--) {
        printf("%d", (reg >> i) & 1);
    }
    printf(")\n");
     return 0;
}
