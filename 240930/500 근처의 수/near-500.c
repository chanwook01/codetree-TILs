#include <stdio.h>

int main() {
    int arr[10];
    int max = 1;
    int min = 1000;
    for(int i = 0; i < 10; i++){
        scanf("%d ", &arr[i]);
    }
    for(int i = 0; i < 10; i++){
        if(arr[i] < 500 && arr[i] >= max){
            max = arr[i];
        }
        if(arr[i] > 500 && arr[i] <= min){
            min = arr[i];
        }
    }
    printf("%d %d", max, min);
    return 0;
}