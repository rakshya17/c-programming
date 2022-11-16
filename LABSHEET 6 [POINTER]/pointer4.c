/*4.Write a program to print the size of pointers that holds the address of three different type
 variables: int, float, char.*/
 
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 	int *a,b;
 	float *c,d;
 	char *e,f;
 	a=&b;
 	c=&d;
 	e=&f;
 	printf("The size of pointer that holds the address of (b)integer is %d.\n",sizeof(a));
 	printf("The size of pointer that holds the address of (d)float is %d.\n",sizeof(c));
 	printf("The size of pointer that holds the address of (f)character is %d.",sizeof(e));
 	getch();
 }
