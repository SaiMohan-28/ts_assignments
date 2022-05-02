#include<stdio.h>
int d_to_b(int n)
{
	if(n==0)
	return 0;
	else
	return n%2+10*d_to_b(n/2);
}
int main()
{
	int n;
	printf("enter number\n");
	scanf("%d",&n);
	printf("%d\n",d_to_b(n));
	return 0;
}
