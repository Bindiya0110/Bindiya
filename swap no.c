#include<stdio.h>
#include<math.h>
int main()
{
	int k, n;
	printf("Enter two number :");
	scanf("%d%d",&k,&n);
	printf("\nBefore swap : %d %d",k,n);
	k = k + n;
	n = k - n;
	k = k - n;
	printf("\nAfter swap : %d %d",k,n);
	return 0;
}
