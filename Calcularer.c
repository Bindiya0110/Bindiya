#include <stdio.h>
int main()
{
    int a, b;
    int choice;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("\nPlease enter your choice(1-4): ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\nThe sum of %d and %d is %d.\n", a, b, a + b);
        break;
    case 2:
        printf("\n%d minus %d equals %d.\n", a, b, a - b);
        break;
    case 3:
        printf("\n%d times %d equals %d.\n", a, b, a * b);
        break;
    case 4:
        if (b == 0)
        {
            printf("\nCannot divide by zero!\n");
        }
        else
        {
                printf("\n%d divided by %d equals %d.\n", a, b, a / b);
        }
        break;
    default:
        printf("\nInvalid Choice!!!\n");
        break;
    }
    return 0;
}
