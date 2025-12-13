#include <stdio.h>

void check(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        char r = c ^ 32;   
        printf("It is an alphabet\n");
        printf("Result after XOR with 32: %c\n", r);
    }
    else
    {
        printf("It is not an alphabet\n");
    }
}

int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    check(c);

    return 0;
}

