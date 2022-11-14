//18.Entered a number in decimal and print it in octal and hexadecimal.
#include<stdio.h>
#include<conio.h>
void main()
{
	int number,num,rem,oct=0,place=1;
	printf("Enter the number:");
	scanf("%d",&number);
	num=number;
	while(number!=0)
	{
		rem=number%8;
		oct=oct+rem*place;
		number/=8;
		place=place*10;
	}
	printf("The decimal number in octal is %d\n",oct);
	printf("The number from decimal to hexa-decimal is %x",num);
	getch();
}
