#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("Enter c:");
	scanf("%d",&c);
	d=a;
	c=b;
	b=a;
	a=d;
	printf("Swaping the values is %d, %d and %d",a,b,c);
	return 0;
	
	
}
