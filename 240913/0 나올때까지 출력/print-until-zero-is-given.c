#include <stdio.h>

int main() {
    
    int a;

    while(1){
        scanf("%d\n", &a);
        if(a == 0){
            break;
        }
        printf("%d\n", a);
    }
    return 0;
}