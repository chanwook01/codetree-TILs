#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n + 1 - i; j++){
            if(j < n + 1 - i){
                printf("%d * %d = %d / ", i, j, i*j);
            }
            else if(j == n + 1 - i){
                printf("%d * %d = %d", i, j, i*j);
            }
            
        }
        printf("\n");
    }
    return 0;
}