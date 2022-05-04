#include<stdio.h>
  int my_strchr(char a[],char c)
 {
          int c1=-1,i;
           for(i=0;a[i]!='\0';i++)
         {
                 if(a[i]==c)
                  {
                         c1=i;
                        break;
                  }
          }
        return c1;
  }
  int main()
  {
          char a[100],c1;
          printf("enter string:\n");
         scanf("\n%[^\n]s",a);
          printf("enter character:\n");
       scanf(" %c",&c1);
          my_strchr(a,c1);
         if(my_strchr(a,c1)>=0)
                  printf("index is :%d\n",my_strchr(a,c1));
         else printf("not found\n");
}
