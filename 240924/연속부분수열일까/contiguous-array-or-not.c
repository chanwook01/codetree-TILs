#include <stdio.h>

int main() {
    int A[100];
    int B[100];
    int n1, n2;
    int is_subsequence = 0;
    scanf("%d %d", &n1, &n2);
    for(int i = 0; i < n1; i++){
        scanf("%d", &A[i]);
    }
    for(int i = 0; i < n2; i++){
        scanf("%d", &B[i]);
    }
    for(int i = 0; i <= n1 - n2; i++){
        int j;
        for(j = 0; j < n2; j++){
            if(A[i + j] != B[j]){
                break;
            }
        }
        if(j == n2){
            is_subsequence = 1;
            break;
        }
    }
    if(is_subsequence)
        printf("Yes");
    else
        printf("No");
    
    return 0;
}