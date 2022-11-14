/*10.If the marks obtained by a student in five different subjects are input through 
the keyboard,find out the aggregate marks and percentage marks obtained by the student.
 Assume that the maximum marks obtained by a student in each subject are 100 */
 
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 	int sub1,sub2,sub3,sub4,sub5,aggregate;
 	float percentage;
 	printf("Enter the marks of 5 subjects :\n");
 	scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
 	aggregate=sub1+sub2+sub3+sub4+sub5;
 	printf("The Aggregate marks of the student in five subjects is %d.\n\n",aggregate);
 	percentage=aggregate/5.0;
 	printf("The percentage of the student is %.2f percent.",percentage);
 	getch();
 
	
 }
