#include<stdio.h>
#include<math.h>

int main()
{
	int k, b, n;
	float d;
	printf("Enter value of circle:");
	scanf("%f", &d);
	d = 3.14 * d * d;
	printf("\nArea of circle is:%f", d);
	
	
	printf("\nEnter value of Tringle:");
	scanf("%d%d", &k, &b);
	n = b * k / 2;
	printf("\nArea of Tringle is:%d", n);
	
	
	printf("\nEnter value of Rectangle:");
	scanf("%d%d", &k, &b);
	n = k * b;
	printf("\nArea of Rectangle is:%d", n);
	return 0;
}
