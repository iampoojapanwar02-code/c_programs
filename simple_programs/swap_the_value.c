#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Swaping the values is %d and %d ",a,b);
	return 0;
	
	
}
