#include <stdio.h>

int main() {
    int N;
    int cnt = 0;
    scanf("%d", &N);
    int arr[N];
    int max, secmax;
    for(int i = 0; i < N; i++){
        scanf("%d ", &arr[i]);
    }
    if(arr[0] > arr[1]){
        max = arr[0];
        secmax = arr[1];
    }
    else{
        max = arr[1];
        secmax = arr[0];
    }
    for(int i = 0; i < N; i++){
        if(arr[i] >= max)
            max = arr[i];
    }
    for(int i = 0; i < N; i++){
        if(arr[i] == max)
            cnt++;
    }
    if(cnt >= 2){
        secmax = max;
    }
    else{
        for(int i = 0; i < N; i++){
            if(arr[i] < max && arr[i] >= secmax)
                secmax = arr[i];
        }
    } 

    printf("%d %d", max, secmax);
    return 0;
}