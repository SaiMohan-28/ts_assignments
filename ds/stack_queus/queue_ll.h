#include<stdio.h>
#include<stdlib.h>
struct queue 
{
	int data;
	struct queue *link;
};
void enqueue(struct queue **front,struct queue **rear,int data)
{
	struct queue *new=(struct queue *)malloc(sizeof(struct queue));
	new->data=data;
	new->link=NULL;
	if((*rear)==NULL && (*front)==NULL)
	{
		(*front)=new;
		(*rear)=new;
	}
	else
	{
			(*rear)->link=new;
			(*rear)=new;
	}

}	
void dequeue(struct queue **front)
{
	if((*front)==NULL)
	{
		printf("queue is empty\n");
	}
	else
	{
			struct queue *temp=(*front);
			(*front)=temp->link;
			printf("dequed element is %d\n",temp->data);
			free(temp);
	}
}
void display(struct queue **front,struct queue **rear)
{
	struct queue *temp=NULL;
	if((*front)==NULL && (*rear)==NULL)
	{
		printf("queue is empty\n");
	}
	else
	{
		temp=(*front);
		while(temp)
		{
			printf("element is %d\n",temp->data);
			temp=temp->link;

		}
	}
}
int main()
{
		struct queue *front=NULL,*rear=NULL;
		enqueue(&front,&rear,10);
		enqueue(&front,&rear,20);
		enqueue(&front,&rear,30);
		display(&front,&rear);
		dequeue(&front);
		display(&front,&rear);
		return 0;
}
