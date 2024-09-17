#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i % 2 == 1){
            for(int j = 1; j <= n; j++){
                printf("%d", j);
            }
        }
        else{
            for(int j = n; j >= 1; j--){
                printf("%d", j);
            }
        }
        printf("\n");
    }
    return 0;
}