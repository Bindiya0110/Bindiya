#include<stdio.h>
int main()
{
	int i,j,c;
	for(i=1;i<=5;i++)
	{
		c=0;
		for(j=1;j<=i;j++)
		{
			if(c%2==0)
			printf("1 ");
	        else
	    	printf("0 ");
	    	c++;
		}
		 printf("\n");
	}
	return 0;
}
