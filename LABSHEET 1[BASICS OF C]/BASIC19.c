/*12.Write a program that asks three coefficients of a quadratic equation and 
calculate its root*/

#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c;
	double root1,root2,denom;
	double root_part;
	printf("Enter the roots a,b and c:");
	scanf("%lf%lf%lf",&a,&b,&c);
	root_part=sqrt(b*b-4*a*c);
	denom=2*a;
	root1=((-b) + root_part)/denom;
	root2=((-b) - root_part)/denom;
	printf("The roots of quadratic equation is:");
	printf("\nRoot1=%.2lf\nRoot2=%.2lf",root1,root2);
	return 0;
	
}
