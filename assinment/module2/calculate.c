#include<stdio.h>
int main()
{
	int k,n;
	int ans;
	float div;
	printf("enter the two value of k and n");
	scanf("%d%d", &k ,&n);
	ans = k+n;
	printf("\n addition of the k and n is: %d",ans);
	ans = k-n;
	printf("\n subtaction of the k and n is: %d",ans);
	ans = k*n;
	printf("\n multiplication of the k and n is: %d",ans);
	div= k/n;
	printf("\n division of the k and n is: %f",div);
	ans = k%n;
	printf("\nmodulo of the k and n is: %d", ans);
	return 0;
}
