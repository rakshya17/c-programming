//a c program to findout the length of the string without using library function strlen

#include<stdio.h>
#include<conio.h>
void main()
{
	char string[20];
	int i=0,length=0;
	printf("Enter string:");
	scanf("%s",string);
	while(string[i]!='\0')
	{
	length++;
	i++;	
	}
	printf("The length of %s is %d.",string,length);
	getch();
}
