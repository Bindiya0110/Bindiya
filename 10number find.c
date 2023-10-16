#include<stdio.h>
int main()
    {
    int i,b=0; 
	int array[10];
    for(i=1;i<=10;i++)
    {
        printf("Enter Ten number is array[%d] :",i);
        scanf("%d",&array[i]);
    }
    for(i=1;i<=b;i++)
    {
        while(array[i]>b)
        {
            b=array[i];
        }
       
	   printf("Greatest number in a given array is:%d",b);
    }
    return 0;
} 
