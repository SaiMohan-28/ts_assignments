#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("File.txt","w");
	if(fp==0)
	{
		printf("File Opened Fail\n");
	}
	else
	{
		fputs("Sai Mohan",fp);
	}
	fclose(fp);
	return 0;
}
