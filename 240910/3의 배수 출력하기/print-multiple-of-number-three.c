#include <stdio.h>

int main() {
    
    int n, i = 1;

    scanf("%d", &n);

    while(i <= n){
        if(i % 3 == 0){
            printf("%d ", i);
        }
        i++;
    }
    
    return 0;
}