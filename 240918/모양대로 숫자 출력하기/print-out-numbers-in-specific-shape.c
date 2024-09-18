#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = n; i >= 1; i--){
        for(int j = n; j >= 1; j--){
            if(j > i)
                printf("  ");
            else
                printf("%d ", j);
        }
        printf("\n");
    
    }
    return 0;
}