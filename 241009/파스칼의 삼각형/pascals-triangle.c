#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            arr[i][j] = 1;
            arr[j][0] = 1;
        }
    }
    for(int i = 1; i < n; i++){
        for(int j = 1; j <= i; j++){
            if(j <= i - 1)
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}