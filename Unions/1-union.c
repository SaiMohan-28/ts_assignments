#include<stdio.h>
union stu
{
	int a;
	char b;
};
int main()
{
	union stu u;
	
	u.a=5;
	u.b=6;
	printf("%ld\n",sizeof(u));
	printf("%d\n",u.a);
	printf("%d\n",u.b);
	return 0;
}
