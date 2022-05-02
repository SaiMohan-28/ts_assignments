#
nclude<stdio.h>
   #include<stdlib.h>
   int mystrlen(char *a)
   {       int count=0;
          while(*a!='\0')
           {
                  count++;
                   *a++;
           }
  return count;
  }
  int  palindrome(char *a)
  {
          int j,i=0,temp=0,len=0;
         char *b,*c;
          len=mystrlen(a);
          b =a;
         c = b + len - 1;
          for (b = a; c >= b;)
         {
          if (*c == *b)
          {
           c--;
           b++;
          } 
          else
          break;
          }
          if (b > c)
   return 1;
          else
          return 0;
  }
  
  int main()
  {
          char a[20];
          int len,j,i=0,temp;
          printf("enter string\n");
          scanf("%[^\n]s",a);
          temp=palindrome(a);
          if(temp==1)
          printf("palindrome\n");
          else printf("not\n");
  
  }
