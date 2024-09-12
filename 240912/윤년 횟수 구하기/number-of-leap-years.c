#include <stdio.h>

int main() {
    
    int n, cnt = 0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0)){
            cnt ++;
        }
    }

    printf("%d", cnt);
    
    return 0;
}