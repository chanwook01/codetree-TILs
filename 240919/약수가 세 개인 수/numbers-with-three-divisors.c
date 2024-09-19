#include <stdio.h>

int main() {
    int start, end;
    int cnt = 0;
    int divide_cnt = 0;

    scanf("%d %d", &start, &end);

    for(int i = start; i <= end; i++){
        divide_cnt = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                divide_cnt ++;
            }
        }
        if(divide_cnt == 3){
            cnt ++;
        }
    }
    printf("%d", cnt);

    return 0;
}