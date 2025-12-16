#include<stdio.h>
int main()
{
	unsigned int value=5;
    unsigned int leftshift=value<<2;
    unsigned int rightshift=value>>1;
    printf("Original value:%u\n",value);
    printf("After left shift value by 2:%u\n",leftshift);
  printf("After Right shift value by 2:%u\n",rightshift);
}
