#include<stdio.h>
int main()
{
    int a,b,c;																																																																																																																																																																																																											
	int choice;
	do{
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the secound number:");
	scanf("%d",&b);
	printf("\n1.Addition\n2.Subtrection\n3.Multiplication\n4.Division\n");
 	printf("\nplease enter your choice(1-4):");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
	    printf("\nThe sum of %d and %d is %d.\n",a,b,a+b);
		break;
	case 2:
	    printf("\n%d minus %d equals %d.\n",a,b,a-b);
		break;
	case 3:
	    printf("\n%d times %d equals %d.\n",a,b,a*b);
		break;
	case 4:
	    if(b == 0)
		{
	    	printf("\nCannot divide by zero!\n");
		}
		else
		{
			printf("\n%d divided by %d equals %d.\n",a,b,a / b);
		}
		break;
	 default:
	 printf("\nInvalid Choice!!!\n");
	 break;
    }
    printf("press 1 to continue\n :");
    scanf("%d",&c);
   }while(c == 1);
    return 0;
}


