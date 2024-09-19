#include <stdio.h>

int main() {
    int n;
    int cnt = 0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        cnt = 0;
        for(int j = 1; j <= n; j++){
            if(i % j == 0){
                cnt ++;
            }
        }
        if(cnt == 2){
            printf("%d ", i);
        }
    }
    return 0;
}