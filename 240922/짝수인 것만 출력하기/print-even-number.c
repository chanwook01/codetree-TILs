#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    int brr[100];
    int b = 0;

    for(int i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            brr[b] = arr[i];
            printf("%d ", brr[b]);
            b++;
        }
    }
    return 0;
}