#include <stdio.h>

int main() {
    
    int n, clss = 0, bokdo = 0, toilt = 0;

    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(i % 12 == 0){
            toilt ++;
        }
        else if(i % 3 == 0){
            bokdo ++;
        }
        else if(i % 2 == 0){
            clss ++;
        }

    }

    printf("%d %d %d", clss, bokdo, toilt);

    return 0;
}