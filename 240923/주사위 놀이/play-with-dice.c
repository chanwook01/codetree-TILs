#include <stdio.h>

int main() {
    int cnt[7] = {0,};
    int arr[10];

    for(int i = 0; i < 10; i++){
        scanf("%d ", &arr[i]);
        cnt[arr[i]]++;
    }

    for(int i = 1; i <= 6; i++){
        printf("%d - %d\n", i, cnt[i]);
    }
    return 0;
}