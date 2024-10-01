#include <stdio.h>

int main() {

    int arr[4][4];
    int sumval = 0;
    for(int i = 0; i < 4; i++){
        sumval = 0;
        for(int j = 0; j < 4; j++){
            scanf("%d", &arr[i][j]);
            sumval += arr[i][j];
        }
        printf("%d\n",sumval);
    }
    return 0;
}