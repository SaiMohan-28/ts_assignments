#include"msb.h"
#include<stdio.h>
int msb(int n)
{
        int x=8;
	x=x-1;
        n=n&(1<<x);
	if(n)
		return 1; 
	else
                return 0;
}

int main()
{
	int n;
	printf("enter number\n");
	scanf("%d",&n);
	if(msb(n))
	{
		printf("bit is set\n");
	}
	else
		printf("bit is not set\n");
	return 0;
}
