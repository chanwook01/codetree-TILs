#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int cnt = 1;

    for(int i = 1; i <= n; i++){
        if(i % 2 == 1){
            for(int j = 1; j <= n; j++){
                printf("%d ", cnt);
                cnt ++;
            }
            cnt += (n - 1);
        }
        else{
            for(int j = 1; j <= n; j++){
                printf("%d ", cnt);
                cnt --;
            }
            cnt += (n + 1);
        }
        printf("\n");
    }
    return 0;
}