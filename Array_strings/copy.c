#include<stdio.h>
int copy(int *arr,int n)
{
	int arr2[n];
	for(int i=0;i<n;i++)
	{
		arr2[i]=arr[i];
	}
	for(int i=0;i<10;i++)
	{
		printf("%d ",arr2[i]);
	}
	printf("\n");
	
}
int main()
{
	int arr[10];
	printf("enter array elemets\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	copy(arr,10);
	
	return 0;
}
