/*2.Create a structure named student that has name, roll, marks and remarks as members. 
Assume appropriate types and size of member. Write a program using structure to read and 
display the data entered by the user.*/

#include<stdio.h>
#include<conio.h>
struct student{
	char name[20];
	int roll;
	int marks;
	char remarks[20];
};
void main()
{
	struct student s;
	printf("Enter the name,rollno,marks and remarks by suing space :");
	scanf("%s%d%d%s",&s.name,&s.roll,&s.marks,s.remarks);
	printf("Displaying the inputs:\n");
	printf("\nName=%s\nRoll-No=%d\nMarks=%d\nRemarks=%s",s.name,s.roll,s.marks,s.remarks);
	getch();
}
