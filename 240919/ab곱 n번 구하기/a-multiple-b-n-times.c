#include <stdio.h>

int main() {
    int n;
    int a, b;
    int total_sum;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        scanf("%d %d", &a, &b);
        total_sum = 1;
        for(int j = a; j <= b; j++){
            total_sum *= j;
        }
        printf("%d", total_sum);
        printf("\n");
    }
    return 0;
}