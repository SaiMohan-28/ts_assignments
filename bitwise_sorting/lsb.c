#include<stdio.h>
int lsb(int n)
{
	if(n&(0x01))
                return 1;
        else
                return 0;

}
int main()
{
	int n;
	printf("enter number\n");
	scanf("%d",&n);
	if(lsb)
		printf("set\n");
	else
		printf("not set\n");
	return 0;
}
