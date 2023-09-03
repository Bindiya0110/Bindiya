//User find the age voting eligible or not eligible.
#include<stdio.h>
int main()
{
	int k;
	printf("Enter value of the voting age eligible or not eligible:");
    scanf("%d",&k);
	(18<k) ? (printf("voting age is eligible")) : (printf("voting age is not eligible"));
	return 0;	
}
