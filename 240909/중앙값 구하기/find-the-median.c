#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a > b && b > c)
        printf("%d", b);
    else if(b > c && c > a)
        printf("%d", c);
    else
        printf("%d", a);

    return 0;
}