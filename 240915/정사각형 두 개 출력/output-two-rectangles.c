#include <stdio.h>

int main() {
    
    int n;
    int cnt = 0;

    scanf("%d", &n);

    while(cnt < 2){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
        cnt ++;
    }

    return 0;
}