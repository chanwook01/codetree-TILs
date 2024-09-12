#include <stdio.h>

int main() {
    
    int n, a;

    int sum = 0;

    double avg;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        scanf("%d\n", &a);
        sum += a;
    }

    avg = (double)sum / n;

    printf("%d %.1lf", sum, avg);
    return 0;
}