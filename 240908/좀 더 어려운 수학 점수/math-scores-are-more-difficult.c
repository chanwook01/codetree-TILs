#include <stdio.h>

int main() {
    int A_math, A_eng, B_math, B_eng;

    scanf("%d %d\n", &A_math, &A_eng);
    scanf("%d %d", &B_math, &B_eng);

    if((A_math > B_math) || (A_math == B_math && A_eng > B_eng))
        printf("A");
    else
        printf("B");
    return 0;
}