#include<stdio.h>
int get(int n,int p)
{
	if(n&(0x01<<p))
		return 1;
	else
		return 0;
}
int main()
{
	int n,p;
	printf("enter number and position\n");
	scanf("%d%d",&n,&p);
	if(get(n,p))
		printf("set\n");
	else
		printf("Not set\n");
	return 0;
}
