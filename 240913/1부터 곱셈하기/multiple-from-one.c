#include <stdio.h>

int main() {
    
    int n;
    int prod = 1;

    scanf("%d", &n);

    for(int i = 1; i <= 10; i++){
        prod *= i;

        if(n <= prod){
            printf("%d", i);
            break;
        }
    }
    return 0;
}