#include <stdio.h>

int main() {
    
    int n;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if((i % 2 == 0) || (i % 3 == 0)){
            printf("1 ");
        }
        else{
            printf("0 ");
        }
    }
    
    return 0;
}