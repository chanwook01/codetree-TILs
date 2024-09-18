#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cnt ++;
            printf("%d ", cnt);

        }
        printf("\n");
    }
    return 0;
}