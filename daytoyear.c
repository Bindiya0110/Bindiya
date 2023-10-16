#include<stdio.h>
int main()
{
	int days, years;
	printf("Enter number of Days");
	scanf("%d", &days);
	years = (days / 365);
	printf("years: %d",  years);
	
	printf("\nEnter number of Years");
	scanf("%d", &years);
	days = (years * 365);
	printf("days: %d",  days);
}
