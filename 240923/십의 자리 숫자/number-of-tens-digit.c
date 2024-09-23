#include <stdio.h>

int main() {
    int num[10] = {0,};
    int arr[100];

    for(int i = 0; i < 100; i++){
        scanf("%d", &arr[i]);
        num[arr[i] / 10 % 10]++;
        if(arr[i] == 0){
            break;
        }
    }

    for(int i = 1; i <= 9; i++){
        printf("%d - %d\n", i, num[i]);
    }
    
    return 0;
}