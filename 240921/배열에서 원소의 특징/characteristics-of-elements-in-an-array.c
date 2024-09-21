#include <stdio.h>

int main() {
    int arr[10];
    int n;
    for(int i = 0; i < 10; i++){
        scanf("%d ", &arr[i]);
    }

    for(int i = 0; i < 10; i++){
        if(arr[i] % 3 == 0){
            printf("%d", arr[i-1]);
            break;
        }

    }    

    return 0;
}