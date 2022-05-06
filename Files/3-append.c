#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char str[50];
	printf("enter data\n");
	scanf("%s",str);
	fp=fopen("File.txt","a");
	if(fp==0)
	printf("File Opened Fialed\n");
	else
	{
		fputs(str,fp);
	}
	fclose(fp);
	return 0;
}
