#include <stdio.h>
#include <stdbool.h>

int main() {
    
    int a, b, c;
    bool satisfied = true;

    scanf("%d %d %d", &a, &b, &c);

    for(int i = a; i <= b; i++){
        if(i % c == 0){
            satisfied = false;
        }
    }
    if(satisfied == false){
        printf("NO");
    }
    else{
        printf("YES");
    }

    return 0;
}