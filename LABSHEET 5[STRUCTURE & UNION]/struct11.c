/*11.Declare a structure template that holds student access information into the student 
registration system. It should hold the 8 character student username, the student 9 character 
Id number, and the student 5 digit pin number. Write a program that ask the student information 
and display them to user.*/

#include<stdio.h>
#include<conio.h>
struct template{
	char username[9];
	 long int id_no;
	long int pin_no;
}s;
void main()
{
	printf("Enter your username of 8 character for.eg(ramaa123) :");
	scanf("%s",s.username);
	printf("Enter the 9 character ID number :");
	scanf("%ld",&s.id_no);
	printf("Enter the 5 digit PIN number :");
	scanf("%ld",&s.pin_no);

printf("\n\nDisplaying the data :\n\n");
printf("Username = %s\n",s.username);
printf("ID Number = %ld\n",s.id_no);
printf("PIN Number = %ld",s.pin_no);
getch();
}
