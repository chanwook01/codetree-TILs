#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];

    for(int i = 0; i < N; i++){
        scanf("%d ", &arr[i]);
    }
    int loc;
    while(N > 0){
        int max = arr[0];
        loc = 0;
        for(int i = 1; i < N; i++){
            if(arr[i] > max){
                max = arr[i];
                loc = i;
            }
        }
        printf("%d ", loc + 1);
        N = loc;
    }
    return 0;
}