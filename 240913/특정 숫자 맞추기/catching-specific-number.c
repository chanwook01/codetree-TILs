#include <stdio.h>

int main() {
    while(1){
        int n;
        scanf("%d", &n);
        if(n < 25){
            printf("Higher\n");
        }
        if(n > 25){
            printf("Lower\n");
        }
        if(n == 25){
            printf("Good");
            break;
        }
    }
    return 0;
}