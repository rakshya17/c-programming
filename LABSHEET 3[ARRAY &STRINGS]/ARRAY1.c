#include<stdio.h>
#include<conio.h>
void main()
{
    int num[20],i,sum=0,product=1,avg,max=0;
      printf("Enter Ten Numbers:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
        sum=sum+num[i];
        product=product*num[i];
          
    }
    for(i=1;i<=10;i++)
    {
    	  if(max<num[i])
        {
            max=num[i];
        } 
	}
    avg=sum/10;
    printf("\nThe sum of all entered numbers is %d.",sum);
    printf("\nThe product of all entered numbers is %d.",product);
    printf("\nThe average of the entered numbers is %d.",avg);
    printf("\nThe maximum among all the entered numbers is %d.",max);
    getch();
}
