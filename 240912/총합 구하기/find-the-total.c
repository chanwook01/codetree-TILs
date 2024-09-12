#include <stdio.h>

int main() {
    
    int a, b;
    int sum = 0;

    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++){
        if(i % 6 == 0 && i % 8 != 0){
            sum += i;
        }
    }

    printf("%d", sum);
    
    return 0;
}