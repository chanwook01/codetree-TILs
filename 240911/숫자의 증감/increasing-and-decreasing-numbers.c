#include <stdio.h>

int main() {
    
    int n;
    char c;

    scanf("%c %d", &c, &n);

    if(c == 'A'){
        for(int i = 1; i <= n; i++){
            printf("%d ", i);
        }
    }
    else{
        for(int i = n; i >= 1; i--){
            printf("%d ", i);
        }
    }

    return 0;
}