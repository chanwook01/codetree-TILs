#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    bool satisfied = true;

    for(int i = 1; i <= 5; i++){
        scanf("%d\n", &n);
        if(n % 3 != 0){
            satisfied = false;
        }
    }
    if(satisfied == true)
        printf("1");
    else
        printf("0");
    
    
    return 0;
}