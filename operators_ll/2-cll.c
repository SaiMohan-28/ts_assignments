#include<stdio.h>
#include<stdlib.h>

struct cll
{
	char data;
	struct cll *link;
};
void create_node(char data,struct cll **head)
{
	struct cll *new=(struct cll*)malloc(sizeof(struct cll));
	if(new==NULL)
	{
		printf("mem not allocated\n");
	}
	else
	{
		if(*head==NULL)
		{
			*head=new;
			new->data=data;
			new->link=new;
		}
		else
		{
			new->data=data;
			new->link=(*head)->link;
			(*head)->link=new;
			(*head)=new;
		}
	}
}
void display(struct cll **head)
{
	printf("Data is\n");
	struct cll *temp=*head;
	if(temp==NULL)
		printf("List is empty\n");
	else
	{
		temp=temp->link;
		do
		{
			printf("%c\n",temp->data);
			temp=temp->link;
		}while(temp!=(*head)->link);
	}

}
int main()
{
	struct cll *head=NULL;
	create_node('a',&head);
	create_node('e',&head);
	create_node('i',&head);
	create_node('o',&head);
	create_node('u',&head);
	display(&head);
	return 0;
}
