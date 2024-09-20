#include <stdio.h>

int main() {
    double n[8];
    double sum = 0.0;
    double avg = 0.0;
    for(int i = 0; i < 8; i++){
        scanf("%lf ", &n[i]);
    }

    for(int i = 0; i < 8; i++){
        sum += n[i];
        avg = (double)sum / 8;
    }
    printf("%.1lf", avg);
    return 0;
}