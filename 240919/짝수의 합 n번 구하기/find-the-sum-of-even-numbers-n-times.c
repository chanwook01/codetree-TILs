#include <stdio.h>

int main() {
    int n;
    int a, b;
    int total_sum = 0;

    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        total_sum = 0;
        scanf("%d %d", &a, &b);
        for(int j = a; j <= b; j++){
            if(j % 2 == 0){
                total_sum += j;
            }
        }
        printf("%d\n", total_sum);
    }
    return 0;
}