#include<stdio.h>

void swap(int *a,int *b)
{
	*a=(*a)^(*b);
	*b=(*a)^(*b);
	*a=(*a)^(*b);

	printf("a=%d b=%d\n",*a,*b);

}
