#include <stdio.h>

int main() {
    int A[100];
    int B[100];
    int n1, n2;
    int cnt = 0;
    int total_cnt = 0;
    scanf("%d %d", &n1, &n2);
    for(int i = 0; i < n1; i++){
        scanf("%d ", &A[i]);
    }
    for(int i = 0; i < n2; i++){
        scanf("%d ", &B[i]);
    }
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            if(total_cnt == n2){
                break;
            }
            if(i + j < n1 && A[i+j] == B[j]){
                cnt ++;
                total_cnt = cnt;
            }
            else{
                cnt = 0;
            }
            
        }
    }
    if(total_cnt == n2){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}