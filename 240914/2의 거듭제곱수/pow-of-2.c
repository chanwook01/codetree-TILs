#include <stdio.h>

int main() {
    
    int N;
    int x = 0;

    scanf("%d", &N);

    while(1){
        if(N == 1){
            break;
        }
        else{
            N /= 2;
            x ++;
        }
    }

    printf("%d", x);
    
    return 0;
}