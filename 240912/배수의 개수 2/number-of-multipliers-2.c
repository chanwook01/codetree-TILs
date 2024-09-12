#include <stdio.h>

int main() {
    
    int a, cnt = 0;

    for(int i = 1; i <= 10; i++){
        scanf("%d\n", &a);
        if(a % 2 != 0){
            cnt ++;
        }
    }

    printf("%d", cnt);

    return 0;
}