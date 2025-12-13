#include <stdio.h>

void show(int n)
{
    int i;

    for (i = 7; i >= 0; i--)
    {
        if (n & (1 << i))
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Binary = ");
    show(n);

    return 0;
}

