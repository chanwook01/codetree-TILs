#include <stdio.h>

int main() {
    
    int n;

    scanf("%d", &n);

    int i = n;

    while(i >= 1){
        printf("%d ", i);
        i--;
    }
    
    return 0;
}