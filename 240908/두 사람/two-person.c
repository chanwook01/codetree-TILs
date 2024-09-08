#include <stdio.h>

int main() {
    int per1_a, per2_a;
    char per1_g, per2_g;

    scanf("%d %c\n", &per1_a, &per1_g);
    scanf("%d %c", &per2_a, &per2_g);

    if((per1_g == 'M' && per1_a >= 19) || (per2_g == 'M' && per2_a >= 19))
        printf("1");
    else
        printf("0");

    return 0;
}