#include <stdio.h>

int main() {
    int arr[2][4];
    double sumval = 0.0;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d ", &arr[i][j]);
        }
    }
    for(int i = 0; i < 2; i++){
        sumval = 0;
        for(int j = 0; j < 4; j++){
            sumval += arr[i][j];
        }
        printf("%.1lf ", (double)(sumval) / 4.0);
    }
    printf("\n");
    sumval = 0;
    for(int j = 0; j < 4; j++){
        sumval = 0;
        for(int i = 0; i < 2; i++){
            sumval += arr[i][j];
        }
        printf("%.1lf ", (double)(sumval) / 2.0);
    }
    printf("\n");
    sumval = 0;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            sumval += arr[i][j];
        }
    }
    printf("%.1lf ", (double)(sumval) / 8.0);
    return 0;
}