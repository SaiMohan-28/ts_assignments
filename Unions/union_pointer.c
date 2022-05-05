#include<stdio.h>
#include<stdlib.h>

union un
{
	int data;
};

int main()
{
union un *temp;
temp=(union un *)malloc(sizeof(temp));

temp->data= 10;

printf("Roll number = %d\n",temp->data);

return 0;
}
