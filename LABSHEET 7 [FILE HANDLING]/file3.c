//3.Write a program to write and read string using character I/O.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char s;
	fp=fopen("D:\\hello.txt","w");
	if(fp==NULL)
	{
		printf("Cannot open the file.");
		exit(0);
	}
	printf("Enter text until you press enter key :");
	while((s=getchar()))!='\n')
	{
	
	fputc(s,fp);
}
fclose(fp);

fopen("D:\\hello.txt","r");
while((s=getc(fp))!=EOF)
{
	printf("%c",s);
}
fclose(fp);
getch();
}
