#include <stdio.h>

int main() {
    int arr[100];
    int n;
    arr[0] = 1;
    scanf("%d", &n);
    arr[1] = n;
    int stop;

    for(int i = 2; i < 100; i++){
        arr[i] = arr[i - 1] + arr[i - 2];
        if(arr[i] > 100){
            stop = i;
            break;
        }
    }
    for(int i = 0; i <= stop; i++)
        printf("%d ", arr[i]);
    return 0;
}