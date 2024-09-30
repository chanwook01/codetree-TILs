#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
    }
    int min = 100;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j > i && arr[j] - arr[i] < min){
                min = arr[j] - arr[i];
            }
        }
    }
    printf("%d", min);
    return 0;
}