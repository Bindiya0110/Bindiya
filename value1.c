/*find out the max. value*/
#include<stdio.h>
int main()
{
    int age;
	printf("Enter your age:");//to take user's age
	scanf("%d",&age);
	if(age>=18)
	{
		printf("\nCongratulation, you are eligible for voting");
	}
	else
	{
	    //nested if
		if(age < 0)
		{
			printf("You age is invalid");
		}
		else
		{
			printf("\nSorry you aren't eligible");
		} 
    }
}
