/*leap year or not leap year */
#include<stdio.h>
int main()
{
	int a;
	printf("enter year value is:");
	scanf("%d",&a);
	if((a%4==0)||(a%4==0)&&(a%100!=0))
	{
		printf("This is leap year");
	}
	else
	{
		printf("This is not leap year");
	}
	return 0;
}
