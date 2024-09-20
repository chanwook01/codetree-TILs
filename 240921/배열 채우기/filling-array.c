#include <stdio.h>

int main() {
    int arr[10];
    int cnt = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d ", &arr[i]);
        
        if(arr[i] == 0){
            break;
        }
        else{
            cnt ++;
        }
        
    }
    for(int i = cnt-1; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}