#include <stdio.h>

int main() {
    
    int N;
    int cnt = 0;

    scanf("%d", &N);

    while(1){
        if(N == 1){
            printf("%d", cnt);
            break;
        }
        else{
            if(N % 2 == 0){
                N /= 2;
            }
            else{
                N = N * 3 + 1;
            }
            cnt ++;
        }
    }
    return 0;
}