#include <stdio.h>

int main() {
    int arr[100];
    int n;
    int cnt = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
        if(arr[i] == 2)
            cnt++;
        if(cnt == 3){
            printf("%d", i + 1);
            break;
        }
    }
    return 0;
}