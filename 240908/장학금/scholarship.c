#include <stdio.h>

int main() {
    int mid_num, fin_num ;

    scanf("%d %d", &mid_num, &fin_num);

    if(mid_num >= 90 && fin_num >= 95)
        printf("100000");
    else if(mid_num >= 90 && fin_num >= 90)
        printf("50000");
    else
        printf("0");
    return 0;
}