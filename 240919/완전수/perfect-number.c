#include <stdio.h>

int main() {
    int start, end;
    int n;
    int total_sum = 0;
    int cnt = 0;
    scanf("%d %d", &start, &end);
    for(int i = start; i <= end; i++){
        total_sum = 0;
        for(int j = 1; j <= i - 1; j++){
            if(i % j == 0){
                total_sum += j;
            }
        }
        if(i == total_sum){
            cnt ++;
        }
    }
    printf("%d", cnt);
    
    return 0;
}