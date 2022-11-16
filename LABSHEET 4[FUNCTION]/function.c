/*1.Write a program to accept two numbers perform addition, subtraction, multiplication,
 division between them  using user defined function called add( ), sub( ), div( ) and
  mul( ).*/
  
  #include<stdio.h>
  #include<conio.h>
  void addition(int,int);
  void subtraction(int,int);
  void divison(int,int);
  void multiplication(int,int);
  void main()
  {
  	int a,b;
  	printf("Enter two numbers :");
  	scanf("%d%d",&a,&b);
  	addition(a,b);
  	subtraction(a,b);
  	divison(a,b);
  	multiplication(a,b);
  	getch();
  }
  void addition(int a,int b)
  {
  	printf("%d + %d = %d\n",a,b,a+b);
  }
    void subtraction(int a,int b)
  {
  	printf("%d - %d = %d\n",a,b,a-b);
  }
    void divison(int a,int b)
  {
  	printf("%d / %d = %d\n",a,b,a/b);
  }
    void multiplication(int a,int b)
  {
  	printf("%d * %d = %d\n",a,b,a*b);
  }
  
