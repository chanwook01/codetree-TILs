#include <stdio.h>

int main() {
    int n, m;
    int arr[11][11] = {0};
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; i++){
        int c, r;
        scanf("%d %d", &c, &r);
        arr[c][r] = c * r;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}