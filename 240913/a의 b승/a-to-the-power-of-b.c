#include <stdio.h>

int main() {
    
    int a, b;
    int prod = 1;

    scanf("%d %d", &a, &b);

    for(int i = 1; i <= b; i ++){
        prod *= a;
    }

    printf("%d", prod);
    
    return 0;
}