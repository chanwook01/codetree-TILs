#include <stdio.h>

int main() {
    int arr[3][3];
    int arr2nd[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d ", &arr[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d ", &arr2nd[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", arr[i][j] * arr2nd[i][j]);
        }
        printf("\n");
    }
    return 0;
}