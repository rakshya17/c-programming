/*Write a program to enter the numbers till the user wants and at the end it should
 display the count of positive, negative and zeros entered*/
 
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 	int n,i,number,positive=0,negative=0,zero=0;
 	printf("How many numbers you wanna enter:");
 	scanf("%d",&n);
 	printf("Enter %d numbers of your choice:\n",n);
 	for(i=1;i<=n;i++)
 	{
 		scanf("%d",&number);
 		if(number>0)
 		{
 			positive++;
		}
		else if(number<0)
		{
			negative++;
		}
		else
		{
			zero++;
		}
	}
	printf("The numbers of positive numbers you entered is %d.\n",positive);
	printf("The numbers of negative numbers you entered is %d.\n",negative);
	printf("The numbers of zero you entered is %d.",zero);
	getch();
 }
