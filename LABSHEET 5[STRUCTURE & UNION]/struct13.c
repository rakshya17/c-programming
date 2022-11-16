/*13.	Design air line data structure that store the following
a.	a)flight number
b.	b)Originating airport code
c.	c)Destination airport code
d.	d)starting time
e.	e)arriving time */


#include<stdio.h>
#include<conio.h>
struct airport{
	char flight_no[20];
	char org_code[20];
	char dest_code[20];
	int start_time;
	int arrive_time;
}s;
void main()
{
printf("Enter the Flight Number of 6 Digit (for eg D12345 ):");
scanf("%s",s.flight_no);
printf("Enter the Originating airport Code of 3 digit in Capital letter(for eg ATL of atlanta):");
scanf("%s",s.org_code);
printf("Enter the Destination airport Code of 3 digit in capital letter:");
scanf("%s",s.dest_code);
printf("Enter the start time :");
scanf("%d",&s.start_time);
printf("Enter the arrive time :");
scanf("%d",&s.arrive_time);
printf("\n\nDisplaying the air line data:\n\n");
printf("Flight number : %s\n",s.flight_no);
printf("Originating Airport Code : %s\tDestination Airport Code : %s\n",s.org_code,s.dest_code);
printf("Starting Time : %d\tArriving Time : %d",s.start_time,s.arrive_time);
getch();
}




