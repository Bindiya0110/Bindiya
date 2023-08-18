#include<stdio.h>
int main()
{
	int days,years;
    printf("Enter no of days and years:");
    scanf("%d%d",&days, &years);
    years = days/365;
    days = years*365;
    printf("\nYears you have is:%d",years);
    printf("\nDays you have is:%d",days);
	return 0;
}
