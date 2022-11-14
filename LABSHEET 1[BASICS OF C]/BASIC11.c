/*11.Write a program that will convert temperature in Centigrade into Fahrenheit.
 [Hint: C=5/9(F-32) and F=9/5*C+32] */

#include<stdio.h>
#include<conio.h>
void main()
{
	float centigrade,fahrenheit=0;
	printf("Enter the temperature in centigrade:");
	scanf("%f",&centigrade);
	fahrenheit=(centigrade*9/5)+32;
	printf("%.2f Centigrade = %.2f Fahrenheit",centigrade,fahrenheit);
	getch();
}
