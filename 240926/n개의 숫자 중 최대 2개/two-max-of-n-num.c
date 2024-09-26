#include <stdio.h>

int main() {
    int N;
    int cnt = 0;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d ", &arr[i]);
    }
    int max = arr[0];
    int secmax = arr[0];
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