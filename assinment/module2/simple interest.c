//simpel interest
#include<stdio.h>
int main()
{
	float b,n,k,v;	
	printf("Enter of the amount is b,n,k,v:");
	scanf("%f%f%f",&b,&n,&k);
	v = (b*n*k)/100;
	printf("\nSimpel interest :%f",v);
	return 0;
}
