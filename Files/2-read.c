#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char str;
	fp=fopen("File.txt","r");
	if(fp==0)
	printf("File Opened Fialed\n");
	else
	{
		while(str!=EOF)
		{
			str=fgetc(fp);
			putchar(str);
		}
	}
	fclose(fp);
	return 0;
}
