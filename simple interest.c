#include<stdio.h>
#include<math.h>

int main()
{
	float a, b, c, d;
	printf("enter amount of P, R, N,:");
	scanf("%f%f%f", &a, &b, &c);
	d = a * b * c / 100;
	printf("\nyour interst is:%f", d);
	return 0;
}
