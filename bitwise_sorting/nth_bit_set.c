#include<stdio.h>
void set(int n, int p)
{
	printf("before %d\n",n);

	printf("after %d\n",n|(0x01<<p));
}
int main()
{
	int n,p;
	printf("enter number and position\n");
	scanf("%d%d",&n,&p);
	(set(n,p));
	return 0;

}
