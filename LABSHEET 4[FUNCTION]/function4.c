/*5.	Write a program to find factorial of a given number using user defined function named                         
 long intfactorial(int,int).*/
 
 #include<stdio.h>
 long int factorial(int);
 void main()
 {
 	int a;
 	long int b;
 	printf("Enter a number to takeout the factorial:");
 	scanf("%d",&a);
 	b=factorial(a);
 	printf("The factorial of %d is %ld.",a,b);
 }
 long int factorial(int a)
 {
 	int i;
 	long int fact=1;
 	for(i=1;i<=a;i++)
 	{
 		fact=fact*i;
	 }
	 return fact;
 }
