#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
    }
    int max = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j > i && arr[j] - arr[i] > max){
                max = arr[j] - arr[i];
            }
        }
    }
    printf("%d", max);
    return 0;
}