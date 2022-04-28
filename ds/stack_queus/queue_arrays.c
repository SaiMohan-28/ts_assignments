#include<stdio.h>
#include<stdlib.h>
#define size 10

int rear=-1,front=-1,queue[size];
void enqueue(int data)
{
	if(rear==size-1)
		printf("queue is full\n");
	else
	{
		if(front==-1)
			front=0;
		rear++;
		queue[rear]=data;
		printf("enqued element is %d\n",data);
	}
}
void dequeue()
{
	if(front==-1||front>rear)
		printf("queue is empty\n");
	else
	{
		printf("dequed element is %d\n",queue[front]);
		front++;
	}
}
void peek()
{
	if(front ==-1||front>rear)
		printf("queue is empty\n");
	else
	{
		printf("peek element is %d\n",queue[front]);
	}
}
void display()
{
	if(front==-1||front>rear)
		printf("queue is empty\n");
	else
	{
		for(int i=front;i<=rear;i++)
		{
			printf("element is %d\n",queue[i]);
		}
	}
}
int main()
{	
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	dequeue();
	peek();
	display();
	return 0;
}
