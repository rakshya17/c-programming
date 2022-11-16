/*8.Write a program to read number of employees n, working in a company. Reserve the memory 
required to store age of employees using malloc() function. Read age of n employees from user 
and count the number of employees of age above 80 years.  */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int *p,n,count=0,i;
	printf("Enter the number of employee:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("Enter the age of emloyee %d:",i+1);
		scanf("%d",(p+i));
	}
	for(i=0;i<n;i++)
	{
		if(*(p+i)>=80)
		count++;
	}
	printf("The number of employees above 80 years is %d.",count);
	getch();
}


