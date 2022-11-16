/*15.Define a structure Employee and its variable called Person1 and initialize it to "Hari", with a 
salary of $50,000, who was hired on March 10, 2001.( use structure with in structure*/

#include<stdio.h>
#include<conio.h>
	struct employee{
		char person1[20];
		long int salary;
		struct date{
		char month[20];
		int day;
		int year;
	
		}a;
	};
int main()
{
struct employee s={
	"Hari",50000,"March",10,2001
	
};

printf("\n\nDisplaying Details :\n\n");
printf("Name = %s\nSalary = $%ld\nHired Date = %s %d, %d",s.person1,s.salary,s.a.month,s.a.day,s.a.year);
getch();
}
