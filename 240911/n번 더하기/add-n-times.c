#include <stdio.h>

int main() {
    
    int a, n;

    scanf("%d %d", &a, &n);

    for(int i = 1; i <= n; i++){
        a += n;
        printf("%d\n", a);
    }
    return 0;
}