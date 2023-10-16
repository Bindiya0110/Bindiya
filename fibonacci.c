#include <stdio.h>

int main() 
{
   int a, b, c, i, n=4;
   
   printf("%d %d ",a,b);
   for(i = 1; i <= n; i++) 
   {
      c = a + b;
      printf("%d ", c);
      
      a = b;
      b = c;
   }
   
   return 0;
}
