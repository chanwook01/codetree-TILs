#include <stdio.h>

int main() {
    int arr[10];
    int sum0 = 0;
    int sum1 = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d ", &arr[i]);
        if(i % 2 == 0){
            sum0 += arr[i];
        }
        else{
            sum1 += arr[i];
        }
    }
    if(sum0 >= sum1){
        printf("%d", sum0 - sum1);
    }
    else{
        printf("%d", sum1 - sum0);
    }

    return 0;
}