#include <stdio.h>

int tally(int num)
{
    int total = 0;

    while (num > 0)
    {
        if (num & 1)
        {
            total = total + 1;
        }
        num = num >> 1;
    }

    return total;
}

int main()
{
    int num;
    int out;

    printf("Enter a number: ");
    scanf("%d", &num);

    out = tally(num);

    printf("Number of 1 bits = %d\n", out);

    return 0;
}



