/*4.Write a program to read the name, address and salary of 5 employee using array of 
structure. Display information of each employee in ascending order of their name.*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee{
	char name[30];
	char address[30];
	long int salary;
};
int main()
{
struct employee s[5],temp; 
int i,j;

for(i=0;i<5;i++)
{
	printf("\n\nEnter the name of employee %d:",i+1);
	scanf("%s",s[i].name);
	printf("Enter the address:");
	scanf("%s",s[i].address);
	printf("Enter the salary:");
	scanf("%ld",&s[i].salary);
}
for(i=1;i<=5;i++)
{
	for(j=i+1;j<=5;j++)
	{
		if(strcmp(s[i].name,s[j].name)>0)
		{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;	
		}
	}
}
	for(i=1;i<=5;i++)
	{
		printf("\n\nName=%s\tAddress=%s\tSalary=%ld\n",s[i].name,s[i].address,s[i].salary);
	}
	getch();
	return 0;
}
