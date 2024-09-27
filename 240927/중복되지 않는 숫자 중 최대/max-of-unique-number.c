#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    int cnt[1001] = {0};
    int max;
    for(int i = 0; i < N; i++){
        scanf("%d ", &arr[i]);
        cnt[arr[i]]++;
    }

    max = -1;

    for(int i = 0; i < N; i++){
        if(cnt[i] == 1 && i > max)
            max = i;
    }

    printf("%d", max);
    
    return 0;
}