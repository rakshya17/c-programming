/*8.Create a union named student that has roll and marks as member. Assign some value to those 
members one at a time and display the result one at a time.*/

#include<stdio.h>
#include<conio.h>
union student{
	char name[20];
	int roll;
	int marks;
}s;
void main()
{
printf("Enter the name of student :");
gets(s.name);
printf("Name = %s\n\n",s.name);
printf("Enter the roll-no:");
scanf("%d",&s.roll);
printf("Roll-No=%d\n\n",s.roll);
printf("Enter the marks:");
scanf("%d",&s.marks);
printf("Marks = %d",s.marks);
getch();	
}
