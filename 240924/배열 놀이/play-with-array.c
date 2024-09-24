#include <stdio.h>

int main() {
    int n, q;
    int a;
    int b, c;
    scanf("%d %d\n", &n, &q);
    int arr[100];
    int cnt = 0;

    for(int i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
    }
    for(int i = 0; i < q; i++){
        scanf("%d ", &a);
        if(a == 1){
            scanf("%d", &b);
            printf("%d", arr[b-1]);
    }
        else if(a == 2){
            scanf("%d", &b);
            for(int i = 0; i < n; i++){
                if(arr[i] == b){
                    printf("%d", i + 1);
                    break;
                }
                if(arr[i] != b)
                    cnt++;
                if(cnt == n){
                    printf("0");
                }
            
            }
            
            }

        else{
            scanf("%d %d", &b, &c);
            for(int i = b - 1; i <= c - 1; i++){
                printf("%d ", arr[i]);
            }

        }
        printf("\n");
    }
    
    return 0;
}