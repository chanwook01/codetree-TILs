#include <stdio.h>

int main() {
    int n;
    int arr[20];
    int cnt = 0;
    scanf("%d", &n);

    for(int i = 0; i < 20; i++){
        arr[i] = n * (i + 1);
        printf("%d ", arr[i]);
        if(arr[i] % 5 == 0)
            cnt ++;
        if(cnt == 2)
            break;
    }
    return 0;
}