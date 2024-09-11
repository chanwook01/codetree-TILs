#include <stdio.h>

int main() {
    
    int a, n;

    scanf("%d %d", &a, &n);

    for(int i = 1; i <= n; i++){
        printf("%d\n", a + n);

        a += n;
    }
    return 0;
}