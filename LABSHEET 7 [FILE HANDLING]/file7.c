/*7.Write a program to store string to the data file "new1.dat" and display the same 
content on the monitor reading from the data file.*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char c;
	fp=fopen("D:\\new1.dat","w");
	if(fp==NULL)
	{
		printf("cannot open file");
		exit(0);
	}
	printf("Enter string until u press enter key :");
	while((c=getchar())!='\n')
	{
		fputc(c,fp);
	}
	fclose(fp);
	fopen("D:\\new1.dat","r");
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
	getch();
}
