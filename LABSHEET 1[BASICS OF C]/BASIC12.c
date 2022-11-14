/*13.Write a program to read three sides of a triangle and calculate the area.
[Hint: Area=?s(s-a)(s-b)(s-c)]*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	double a,b,c,s,area,result;
	printf("Enter the value of a,b and c:");
	scanf("%lf%lf%lf",&a,&b,&c);
	s=(a+b+c)/2; //semi-perimeter
	area=s*((s-a)*(s-b)*(s-c));
	result=sqrt(area);
	printf("The area of a three sides of a triangle with: a=%lf b=%lf c=%lf is:\n",a,b,c);
	printf("%lf",result);
	getch();
	
	
}
