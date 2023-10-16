#include<stdio.h>
int main()
{
    int k, b, n;
 
    printf("Enter the numbers K, B and N: ");
    scanf("%d %d %d", &k, &b, &n);
 
    if (k >= b && k >= n)
        printf("%d is the largest number.", k);
 
    else if (b >= k && b >= n)
        printf("%d is the largest number.", b);
 
    else
        printf("%d is the largest number.", n);
 
    return 0;
}
