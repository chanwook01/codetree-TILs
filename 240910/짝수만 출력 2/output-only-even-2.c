#include <stdio.h>

int main() {
    
    int a, b, i;

    scanf("%d %d", &b, &a);

    i = b;

    while(i >= a){
        printf("%d ", i);
        i -= 2;
    }
    
    return 0;
}