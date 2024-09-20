#include <stdio.h>

int main() {
    int arr[10];
    int total_sum = 0;
    int cnt = 0;
    for(int i = 1; i <= 10; i ++){
        scanf("%d ", &arr[i]);
        if(arr[i] >= 250){
            break;
        }
        else{
            cnt ++;
            total_sum += arr[i];
        }
    }
    printf("%d %.1lf", total_sum, (double)total_sum / cnt);

    return 0;
}