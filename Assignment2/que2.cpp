#include<stdio.h>
int main()
{
	int n=3;
	unsigned char reg=0x2A;
	if (reg&1<<3)
	{
		printf("Bit 3 is set.");
	}
	else
	{
		printf("Bit 3 is clear.");
	}
}
