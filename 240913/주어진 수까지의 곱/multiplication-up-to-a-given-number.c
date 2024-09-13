#include <stdio.h>

int main() {
   
   int a, b;
   int prod = 1;

   scanf("%d %d", &a, &b);

   for(int i = a; i <= b; i++){
        prod *= i;
   }

   printf("%d", prod);
   
    return 0;
}