#include <stdio.h>

int main() {
    
    int a, b;
    char c;

    while(1){
        scanf("%d %d %c\n", &a, &b, &c);
        printf("%d\n", a * b);
        if(c == 'C'){
            break;
        }
    }
    return 0;
}