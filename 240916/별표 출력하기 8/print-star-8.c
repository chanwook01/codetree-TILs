#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i % 2 == 1){
            printf("*");
        }
        else{
            for(int j = 1; j <= i; j++)
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}