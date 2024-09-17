#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < 2 * n; i += 2){
        for(int j = 0; j < 2 * n; j += 2){
            printf("%d ", 10 + i + j + 1);
        }
        printf("\n");
    }
    return 0;
}