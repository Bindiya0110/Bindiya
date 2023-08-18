/*logical operator*/
#include<stdio.h>
int main()
{
	int k,n;
	printf("Enter two numbers:");
	scanf("%d%d", &k,&n);
	if(!((k>0)||(n<0)))
	{
		printf("\n true");
	}
	else
	{
		printf("\nfalse");
	}
	return 0;
}
