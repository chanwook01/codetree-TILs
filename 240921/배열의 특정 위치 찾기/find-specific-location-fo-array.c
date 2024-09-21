#include <stdio.h>

int main() {

    int arr[10];

    for(int i = 0; i < 10; i++){
        scanf("%d ", &arr[i]);
    }
    printf("%d %.1lf", arr[1]+arr[3]+arr[5]+arr[7]+arr[9], (arr[2]+arr[5]+arr[8])/3.0);
    return 0;
}