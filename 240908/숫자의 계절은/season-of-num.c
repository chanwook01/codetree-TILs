#include <stdio.h>

int main() {
    int m;

    scanf("%d", &m);

    if(m == 12 || m == 1 || m == 2)
        printf("Winter");
    else if(m >= 9)
        printf("Fall");
    else if(m >= 6)
        printf("Summer");
    else
        printf("Spring");

    
    return 0;
}