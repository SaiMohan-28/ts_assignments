#include <stdio.h>
#define MIN 0
#define MAX (n-1)
int min_max(int n , int arr[n])
{
    int i,j,temp;
    for(i=MIN;i<=MAX;i++)
    {
        for(j=i+1;j<=MAX;j++)
        {
        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }
    }
    for(i=0;i<=MAX;i++)
    printf("%d  ",arr[i]);
    printf("\nmaximum number  is %d",arr[MAX]);
    printf("\nmanimum number  is %d",arr[MIN]);
}
int main()
{

    int arr[]={10,12,15,16,56,23};
    int i,j,n,temp;
    n=sizeof(arr)/sizeof(int);

    min_max(n,arr);
    
}
