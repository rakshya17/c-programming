/*20.Write a program that ask a number and print the remainder after dividing
 the number by 5 */
 
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 	int n;
 	printf("Enter the number:");
 	scanf("%d",&n);
 	printf("The remainder of %d after dividing by 5 is %d.",n,n%5);
 	getch();
 }
