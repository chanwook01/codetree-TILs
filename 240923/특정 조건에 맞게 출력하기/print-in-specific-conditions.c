#include <stdio.h>

int main() {
    int arr[100];
    int n;
    for(int i = 0; i < 100; i++){
        scanf("%d ", &arr[i]);
        if(arr[i] == 0){
            n = i;
            break;
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 1)
            printf("%d ", arr[i] + 3);
        else
            printf("%d ", arr[i] / 2);
    }
    return 0;
}