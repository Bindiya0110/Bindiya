/*find the area*/
#include<stdio.h>
#include<math.h>
int main()
{
	int k,n,v,a,d;
	float b;
	printf("Enter the Circle,Tringle,Rectangle:");
	scanf("%f%d%d%d%d",&b,&k,&n,&a,&d);
	b = 3.14*b*b;
	v = n*k/2;
	k = a*d;
	printf("\nArea of the Circle is: %f",b);
	printf("\nArea of the Tringle is: %d",v);
	printf("\nArea of the Rectangle is: %d",k);
	return 0;
}
