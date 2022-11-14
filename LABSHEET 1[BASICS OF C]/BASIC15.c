/*17.Two number are entered through keyboard and if the first number is greater
 than second number then print the sum of number otherwise print the difference 
 of number (use tannery operator)*/
 
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 	int a,b,c;
 	printf("Enter the value of a and b :");
 	scanf("%d%d",&a,&b);
 	//prints addition if a>b and subtraction if a<b
 	c=a>b?printf("%d + %d = %d",a,b,a+b):printf("%d - %d = %d",a,b,a-b);
 	getch();
 }
