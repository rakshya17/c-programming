/*1.Create a file named test.txt and write some text "Welcome to my college" to the 
file.*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	fp=fopen("D:\\test.txt","w");
	if(fp==NULL)
	{
		printf("\nCannot open file.");
		exit(0);
	}
	else
	{
	printf("\nFile is created.");
    }
	fputs("Welcome to my college.",fp);
	fclose(fp);
	getch();
}
