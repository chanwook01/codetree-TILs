#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int cnt = 2;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            printf("%d ", cnt);
            cnt += 2;
            if(cnt >= 10){
                cnt = 2;
            }
        }
        printf("\n");
    }
    return 0;
}