#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d\n", &n, &m);
    int arr[100];
    int cnt = 0;

    for(int i = 0; i < 100; i++){
        scanf("%d ", &arr[i]);
        if(arr[i] == m){
            cnt ++;
        }
    }

    printf("%d", m);
    
    return 0;
}