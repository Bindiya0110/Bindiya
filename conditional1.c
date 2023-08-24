#include<stdio.h>
int main()
{
	int k,b,n;
	printf("Enter three numbers:"); //input the value of 'k' from user
	scanf("%d%d%d",&k,&b,&n);
	if((k>b)&&(k>n))
	{
		printf("\nK is max.:%d",k);
	}
	else
	{
	    if((b>k)&&(b>n))
	      {
            printf("\nB is max.:%d",b);             
	      }
	      else
	      {
	       	printf("\nN is max.:%d" ,n);
	      }
	}
	return 0;
}


