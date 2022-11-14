//6.	Write a program to convert entered number of seconds into hours, minutes and seconds

#include<stdio.h>
#include<conio.h>
void main()
{
	int time,second,hour,minute;
	printf("Enter the number in seconds: ");
    scanf("%d",&time);
    hour=time/3600;
    minute=(time-(hour*3600))/60;
    second=time-(hour*3600)-(minute*60);
    printf("Time in Hour:Minute:Second Format:-\n");
    printf("%d:%d:%d",hour,minute,second);
    getch();
}
