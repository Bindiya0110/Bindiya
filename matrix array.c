#include<stdio.h>
int main()
{
	int i,j;
	int array[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("value of the array[%d][%d]:",i,j);
		scanf("%d",&array[i][j]);
     	}
    }
        printf("\nmatrix value is:\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d",array[i][j]);
		printf("\n");
    }
}
