#include<stdio.h>
int main()
{
	int k, n;
	int ans;
	printf("enter the value of the k and n: ");
	scanf("%d%d", &k,&n);
    printf("\nAddition equal to of  is: %d ",k+=n);
    printf("\nSubtrection equal to of is: %d ",k-=n);
    printf("\nMultipliction equal to of is: %d ",k*=n);
    printf("\nDivision equal to of  is: %d",k/=n);
    printf("\nModulo equal to of is: %d",k%=n);
	return 0;
}
