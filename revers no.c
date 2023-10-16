#include <stdio.h>

int main() {

  int n, r = 0, k;

  printf("Enter number: ");
  scanf("%d", &n);

  while (n != 0) {
    k = n % 10;
    r = r * 10 + k;
    n /= 10;
  }

  printf("Reversed number is = %d ", r);

  return 0;
}

