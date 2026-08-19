#include<stdio.h>
int main()
{
	int q1,q2,r1,r2,total;
	printf("Enter quantity of pizza:");
	scanf("%d",&q1);
	printf("Enter rate of pizza:");
	scanf("%d",&r1);
	printf("Enter quantity of colddrink:");
	scanf("%d",&q2);
	printf("Enter rate of pizza:");
	scanf("%d",&r2);
	total=q1*r1+q2*r2;
	printf("Total bill is %d",total);
	return 0;
	
}
