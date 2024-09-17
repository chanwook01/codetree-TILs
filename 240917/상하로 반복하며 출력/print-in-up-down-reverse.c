#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j % 2 == 1){
                printf("%d", cnt + 1);
            }
            else{
                printf("%d", n - cnt);
            }
            }
        cnt++;
        printf("\n");
    }
    return 0;
}