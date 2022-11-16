/*2.Write a program to open file "test.txt" created in previous question, read its 
content and display it on screen.*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char s[100];
	fp=fopen("D:\\test.txt","r");
	if(fp==NULL)
	{
		printf("cannot open file");
		exit(0);
	}
	else
	{
		printf("File is opened sucessfully\n\n");
	}
	fgets(s,100,fp);
	printf("Text from the file is : %s",s);
	fclose(fp);
	getch();
	
}
