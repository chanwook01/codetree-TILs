#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d\n", &n, &m);
    int arr[n];
    int cnt = 0;

    for(int i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
        if(arr[i] == m){
            cnt ++;
        }
    }

    printf("%d", cnt);

    return 0;
}