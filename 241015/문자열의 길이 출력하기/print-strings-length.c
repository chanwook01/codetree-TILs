#include <stdio.h>
#include <string.h>

int main() {
    char a[101];
    char b[101];

    scanf("%s\n%s", a, b);
    printf("%d", strlen(a) + strlen(b));
    return 0;
}