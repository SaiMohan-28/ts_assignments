#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *s,*d;
	char ch;
	if((s=fopen("File.txt","r"))==NULL)
	{
		printf("Error to open a file\n");
		exit(1);
	}
	if((d=fopen("File1.txt","w"))==NULL)
	{
		printf("Error to open a file\n");
                exit(1);

	}
	else
	{
		while((ch=fgetc(s))!=EOF)
		{
			fputc(ch,d);
		}
	}
	fclose(s);
	fclose(d);
	return 0;
}
