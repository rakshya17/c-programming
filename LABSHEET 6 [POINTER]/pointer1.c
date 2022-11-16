/* 1.Write a program which defines three variables of different types: char, float and int. 
Dispalys the memory address reserved by these variables.*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int *a,a1;
	float *f,f1;
	char *p,p1;
	a=&a1;
	f=&f1;
	p=&p1;
	printf("Memory address of a(integer variable)=%u\n",a);
    printf("Memory address of f(float variable)=%u\n",f);
    printf("Memory address of p(character variable)=%u",p); 	
    getch();

}
