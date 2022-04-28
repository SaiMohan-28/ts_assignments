#include<stdio.h>
#define N 5

int s1[N],s2[N],top1=-1,top2=-1,count;

void push1(int data)
{
    if(top1==N-1)
        printf("Queue is full\n");
    else
    {
        top1++;
        s1[top1]=data;
    }
}
int pop1()
{
    return s1[top1--];
}
void push2(int data)
{
    if(top2==N-1)
        printf("Queue is full\n");
    else
    {
        top2++;
        s2[top2]=data;
    }
}
int pop2()
{
    return s2[top2--];
}
void enque(int data)
{
    push1(data);
    count++;
    return ;
}
void deque()
{
    int i,a;
    if(top1==-1 && top2 ==-1)
        printf("Queue is empty\n");
    else
    {
        for(i=0;i<count;i++)
        {
            a=pop1();
            push2(a);
        }
        printf("Deque function occured %d\n",pop2());
        count--;
        for(i=0;i<count;i++)
        {
            push1(pop2());
        }
    }
    return ;
}
void display()
{
    int i;
    for(i=0;i<=top1;i++)
      printf("Queue elements are s1[%d] = %d\n",i,s1[i]);
}
int main()
{
    enque(15);
    enque(4);
    enque(17);
   deque();
    display();
}
