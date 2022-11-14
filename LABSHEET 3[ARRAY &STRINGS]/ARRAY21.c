#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char string[100],string1[100];
	int i;
	printf("Enter 1st string:\n");
	gets(string);
	printf("\nEnter 2nd string:\n");
	gets(string1);
	
	if(strcmp(string,string1)>0)
	{
		printf("%s is greater than %s.",string,string1);
	}
	else if(strcmp(string1,string)>0)
	{
		printf("%s is greater than %s.",string1,string);
	}
	else
	{
		printf("Both are equal.");
	}
	getch();
}
