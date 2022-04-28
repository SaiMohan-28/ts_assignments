#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int data;
	struct stack *link;
};
struct stack *top=NULL;
void push(int data)
{
	struct stack *new=(struct stack*)malloc(sizeof(struct stack));
	new->data=data;
	new->link=NULL;
	if(top==NULL)
		top=new;
	else
	{
		new->link=top;
		top=new;
	}
	printf("pushed element is %d\n",data);
}
void pop()
{
	if(top==NULL)
		printf("stack is empty\n");
	else
	{
		struct stack *temp=top;
	       	top=top->link;
		temp->link=NULL;
		printf("popped element is %d\n",temp->data);
		free(temp);	
	}
}
void peek()
{
	if(top==NULL)
		printf("stack is empty\n");
	else
	{
		printf("peeked element is %d\n",top->data);
	}
}
void display()
{
	if(top==NULL)
		printf("stack is empty\n");
	else
	{
		struct stack *temp=top;
		while(temp)
		{
			printf("%d\n",temp->data);
			temp=temp->link;
		}
	}
}
int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	pop();
	peek();
	display();
	return 0;
}
