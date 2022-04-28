#include<stdio.h>
#include<stdlib.h>
#define stack 5

int size[stack];
int data,top=-1;
void push(int data)
{
	if(top==stack-1)
	printf("stack is full\n");
	else
	{
		top++;
		size[top]=data;
		printf("Pushed data succesfully\n");
	}
}
void pop()
{
	if(top==-1)
	printf("stack is empty\n");
	else
	{
		printf("popped element is %d\n",size[top]);
		top--;
	}
}
void peek()
{
	if(top==-1)
	printf("stack is empty\n");
	else
	{
		printf("Peek element is %d\n",size[top]);
	}
}
void display()
{
	if(top==-1)
	printf("stakc is empty\n");
	else
	{
		for(int i=0;i<=top;i++)
		{
			printf("element is %d\n",size[i]);
		}
	}
}
int main()
{
	int option;
	while(1)
	{
					         printf("Chooseoption\n1.push\n2,pop\n3.peek\n4.display\n5.exit\n");
	scanf("%d",&option);
		if(option==1)
		{
			printf("enter data to be pushed\n");
			scanf("%d",&data);
			push(data);
		}
		else if(option==2)
		{
			pop();
		}
		else if(option==3)
		{
			peek();
		}
		else if(option==4)
		{
			display();
		}
		else
		break;
	}
	return 0;
}
