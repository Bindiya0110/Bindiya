#include<stdio.h>
int main()
{
	int n;
	while(n<=10)
	{
		if(n%2==0)
		{
			printf("%d\n",n);
			n++;
		}
		else
		{
			n++;
		}
	}
	return 0;
}
