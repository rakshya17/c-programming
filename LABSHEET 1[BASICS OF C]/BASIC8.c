 //8.	Write a program to convert length from mm to km, m, cm and mm

#include<stdio.h>
#include<conio.h>
void main()
{
	float length,km,m,cm,mm;
	printf("Enter the length in millimeter:");
	scanf("%f",&length);
	km=length/1000000.0;
	m=(length-(km*1000000.0))/1000.0;
	cm=(length-(km*1000000.0)-(m*1000.0))/10.0;
	mm=length-(km*1000000.0)-(m*1000.0)-(cm*10.0);
	printf("The given length in mm to km:m:cm:mm format is \n\n");
	printf("%.1f : %.1f: %.1f: %.1f",km,m,cm,mm);
	getch();
	
}
