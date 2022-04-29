#include<stdio.h>
int main()
{
        int x,p;
           printf("enter number and pos\n");
           scanf("%d%d",&x,&p);
           printf("%d\n",x&=(~(0x1<<p)));
}
