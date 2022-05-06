#include<stdio.h>
int sumn(int n)
{
	if(n==0)
	return 0;
	else
	return n+sumn(n-1);	
}

int main()
{
	int n,sum=0;
	printf("enter numer\n");
	scanf("%d",&n);
	printf("sum=%d\n",sumn(n-1));
	return 0;
}
