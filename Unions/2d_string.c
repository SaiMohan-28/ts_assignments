#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char *str[5],a[5];
	int l,i;
	char *x;
	for(int i=0;i<5;i++)
	{
		scanf("%s",a);
		l=strlen(a);
		x=(char *)malloc(l+1);
		strcpy(x,a);
		str[i]=x;
	}
	for(int i=0;i<5;i++)
	{
		printf("%s\n",str[i]);
	}
	return 0;
}
