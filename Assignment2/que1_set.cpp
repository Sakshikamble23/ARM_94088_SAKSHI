#include<stdio.h>


int main()
{
	int n=4;
	 unsigned char reg =0x2A;
	reg=reg| ( 1<<4);
	printf("result in hexdecimal=0x%X\n",reg);
	printf("result in binary=");
	for(int i=7;i>=0;i--)
	{
		printf("%d",(reg>>i)&1);
	}
	printf("\n");
	return 0;
    
}
