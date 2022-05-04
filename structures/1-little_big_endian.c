#include<stdio.h>
int main()
{
	unsigned int i=1;
	char *ch=(char *)&i;
	if(*ch)
		printf("little endian\n");
	else
		printf("big endian\n");
	return 0;

}
