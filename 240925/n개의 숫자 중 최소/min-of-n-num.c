#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    int cnt = 0;
    for(int i = 0; i < N; i++){
        scanf("%d ", &arr[i]);
    }
    int min = arr[0];
    for(int i = 1; i < N; i++){
        if(min >= arr[i]){
            min = arr[i];
        }
    }
    printf("%d ", min);

    for(int i = 0; i < N; i++){
        if(arr[i] == min)
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}