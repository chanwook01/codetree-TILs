#include <stdio.h>

int main() {
    int n;
    int num = 1;
    int arr[11][11];
    int col = 1;
    scanf("%d", &n);
    for(int j = n-1; j >= 0; j--){
        if(col % 2 == 1){
            for(int i = n-1; i >= 0; i--){
                arr[i][j] = num;
                num++;
            }
        }
        else{
            for(int i = 0; i < n; i++){
                arr[i][j] = num;
                num++;
            }
        }
        col++;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}