#include<stdio.h>
int main()
{
	unsigned int reg=0xABCD;
	unsigned int mask=0x0F;
	unsigned int lower_4_bits=reg&mask;
	printf("Original register value:0x%X\n",reg);
	printf("Masking value:0x%X\n",mask);
	printf("Lower 4 bit hexadecimal value:0x%X\n",lower_4_bits);
	return 0;
	
}
