#include <stdio.h>

int main() {
    int n, m;
    int num = 1;
    int sum = 0;
    int arr[101][101];
    scanf("%d %d", &n, &m);
    while(num <= n * m){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(i+j == sum){
                    arr[i][j] = num;
                    num++;
                }
            }
        }
        sum ++;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}