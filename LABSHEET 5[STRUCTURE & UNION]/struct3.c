/*3.Write a program to read the name, rollno and mark of 5 students using array of structure. 
Display the name and rollno of those students whose mark is greater than 50.*/

#include<stdio.h>
#include<conio.h>
struct student{
	char name[20];
	int roll;
	int marks;
}s[5];
void main()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\nEnter the Name , Roll-No and then your marks using space of student %d:\t",i+1);
		scanf("%s%d%d",s[i].name,&s[i].roll,&s[i].marks);
	}
	printf("\nPrinting the name and roll of student whose marks is greater than 50:\n\n");
	for(i=0;i<5;i++)
	{
		if(s[i].marks>50)
		{
			printf("\nName=%s\tRoll-No=%d\n",s[i].name,s[i].roll);
		}
	}
	getch();
}
