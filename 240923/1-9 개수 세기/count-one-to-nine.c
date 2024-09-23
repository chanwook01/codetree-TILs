#include <stdio.h>

int main() {
    int arr[10] = {0, };
    int n;
    scanf("%d", &n);
    int cnt[100];

    for(int i = 0; i < n; i++){
        scanf("%d ", &cnt[i]);
    }

    for(int i = 0; i < n; i++){
        arr[cnt[i]]++;
    }

    for(int i = 1; i < 10; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}