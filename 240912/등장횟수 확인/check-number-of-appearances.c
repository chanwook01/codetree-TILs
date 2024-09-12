#include <stdio.h>

int main() {
    
    int i, a, cnt = 0;

    for(i = 1; i <= 5; i++){
        scanf("%d\n", &a);

        if(a % 2 == 0){
            cnt ++;
        }
    }

    printf("%d", cnt);
    
    return 0;
}