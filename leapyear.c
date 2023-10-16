#include<stdio.h>
int main()
{
	int a;
	float c;
	printf("enter any year to find leap year:");
	scanf("%d", &a);
	c = a / 4;
	if ((c >= .0) && (!( c <= .0)))
	{
	
	printf("this is a leap year");
	}
	else
	{
	
	printf("this is a not leap year");
	}
	return 0;
}
