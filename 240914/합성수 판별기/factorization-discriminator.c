#include <stdio.h>
#include <stdbool.h>
int main() {
    int n;
    bool x = false;
    scanf("%d", &n);

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            x = true;
        }
    }
    if(x == true){
        printf("C");
    }
    else{
        printf("N");
    }
    return 0;
}