#include<stdio.h>
int main()
{
	int k,b,n;
	printf("Enter three numbers:"); //input the value of 'k' from user
	scanf("%d%d%d",&k,&b,&n);
	if((k>b)&&(k>n))
	{
		printf("\nMax. value of the is:%d",k);
	}
	else
	{
	    if((b>k)&&(b>n))
	      {
            printf("\nMax. value of the is:%d",b);             
	      }
	      else
	      {
	       	printf("\nMax.value of the is:%d" ,n);
	      }
	}
	return 0;
}
