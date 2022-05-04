#include<stdio.h>
   #include<string.h>
   void my_strcat(char a[],char b[])
   {
          int i,j=0;
           for(i=0;a[i]!=0;i++)
                   continue;
          while(b[j]!=0)
           {
                  a[i]=b[j];
                  i++;
                  j++;
          }
          a[i]='\0';
 int len=strlen(a);
          printf("%s \nlen=%d\n",a,len);
  }
  int main()
  {
          char a[50],b[20];
          printf("enter strings\n");
          scanf("%19s%19s",a,b);
          my_strcat(a,b);
          return 0;
  
  
  }
