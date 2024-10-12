#include <stdio.h>

int main() {
    int n, m;
    int arr[10][10] = {0};
    int num = 1;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; i++){
        int r, c;
        scanf("%d %d", &r, &c);
        arr[r-1][c-1] = num;
        num++;
    }
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}