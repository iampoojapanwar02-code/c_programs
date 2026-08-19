#include<stdio.h>
int main()
{
	float area ;
	 int b,h;
	printf("Enter base of triangle :");
	scanf("%d",&b);
	printf("Enter height of triangle :");
	scanf("%d",&h);
	area=0.5*b*h;
	printf("Area of triangle is %f",area);
	return 0;
}
