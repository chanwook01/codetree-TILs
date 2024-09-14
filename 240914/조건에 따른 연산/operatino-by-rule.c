#include <stdio.h>

int main() {
    
    int n;
    int cnt = 0;

    scanf("%d", &n);

    while(1){
        
        if(n % 2 == 0){
            n = n * 3 + 1;
        }
        else{
            n = n * 2 + 1;
        }
        cnt ++;

        if(n >= 1000){
            break;
        }
    }

    printf("%d", cnt);

    return 0;
}