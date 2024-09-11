#include <stdio.h>

int main() {
    
    int N;

    int a;

    scanf("%d\n", &N);

    for(int i = 1; i <= N; i++){
        scanf("%d\n", &a);
        if(a % 2 == 1 && a % 3 == 0){
            printf("%d\n", a);
        }
    }

    return 0;
}