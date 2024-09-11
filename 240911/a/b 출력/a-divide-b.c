#include <stdio.h>

int main() {
    
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d.", a / b);

    for(int i = 1; i <= 20; i++){
        a = (a-(b*(a/b)))*10;
        printf("%d", a/b);
    }

    return 0;
}