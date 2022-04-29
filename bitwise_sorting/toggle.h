#include<stdio.h>

void toggle(int n,int p)
{
	printf("Before Toggle %d\n",n);
	printf("After Toggle %d\n",n^(0x01<<p));
}
