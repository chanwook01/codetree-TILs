#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 1; j < i + 1; j++){
            printf("  ");
            
        }
        for(int j = 0; j < n; j++){
            if(n - j - cnt > 0){
                printf("%d ", n - j - cnt);
            }
        }
        cnt ++;
        printf("\n");
    }
    return 0;
}