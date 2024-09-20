#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    double totalsum = 0.0;
    double avg;
    double sub[n];
    for(int i = 0; i < n; i++){
        scanf("%lf ", &sub[i]);
    }
    for(int i = 0; i < n; i++){
        totalsum += sub[i];
    }
    avg = (double)totalsum / n ;

    printf("%.1lf\n", avg);

    if(avg >= 4.0){
        printf("Perfect");
    }
    else if(avg >= 3.0)
        printf("Good");
    else
        printf("Poor");
    
    return 0;
}