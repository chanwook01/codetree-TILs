#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char a = 'A';

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if(a == 'Z'){
                printf("%c", a);
                a = 'A';
            }
            else{
                printf("%c", a);
                a ++;
            }
        }
        printf("\n");
    }
    return 0;
}