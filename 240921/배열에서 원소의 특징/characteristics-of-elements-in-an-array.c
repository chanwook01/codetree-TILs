#include <stdio.h>

int main() {
    int arr[10];
    int n;
    for(int i = 0; i < 10; i++){
        scanf("%d ", &arr[i]);
    }

    for(int i = 0; i < 10; i++){
        if(arr[i] % 3 == 0){
            n = i;
            break;
        }
        
    }
    printf("%d", arr[n-1]);
    return 0;
}