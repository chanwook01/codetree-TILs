#include <stdio.h>

int main() {
    
    int a, sum = 0;
    int cnt = 0;
    double avg;

    for(int i = 1; i <= 10; i++){
        scanf("%d\n", &a);

        if(a >= 0 && a <= 200){
            sum += a;
            cnt ++;
        }
    }

    avg = (double)sum/cnt;

    printf("%d %.1lf", sum, avg);
    return 0;
}