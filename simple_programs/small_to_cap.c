#include<stdio.h>
int main()
{
	char small,cap;
	printf("Enter character:");
	scanf("%c",&small);
	cap=small-32;
	printf("Capital is %c",cap);
	return 0;
}
