#include <stdio.h>
#include <stdbool.h>
int main() {
    
    int a, b;
    bool x = false;

    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++){
        if(1920 % i == 0 && 2880 % i == 0){
            x = true;
        }
    }
    if(x == true){
        printf("1");
    }
    else{
        printf("0");
    }
    
    return 0;
}