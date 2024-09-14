#include <stdio.h>

int main() {
    
    int a;
    int cnt = 0;

    while(1){
        scanf("%d\n", &a);

        if(a % 2 == 0){
            cnt += 1;
            printf("%d\n", a/2);
        }
        if(cnt == 3){
            break;
        }
    }
    return 0;
}