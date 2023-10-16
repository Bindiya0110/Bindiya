#include<stdio.h>
int main()
{
	int i,j;
	char n = 'A';
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",n++);
			printf(" ");
		}
		    printf("\n");
	}
	return 0;
}
