#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[100][100];
    int num = 0;
    for(int j = 0; j < m; j++){
        for(int i = 0; i < n; i++){
            if(j % 2 == 0){
                arr[i][j] = num;
                num ++;
            }
            else{
                arr[n-1-i][j] = num;
                num++;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}