#include <stdio.h>
#include <string.h>

int main() {
    char a[20];
    char b[20];

    scanf("%s %s", a, b);
    if(strlen(a) > strlen(b)){
        printf("%s %d", a, strlen(a));
    }
    else if(strlen(b) > strlen(a)){
        printf("%s %d", b, strlen(b));
    }
    else{
        printf("same");
    }
    return 0;
}