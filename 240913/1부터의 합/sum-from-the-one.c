#include <stdio.h>

int main() {
    
    int n;
    int sum = 0;

    scanf("%d", &n);

    for(int i = 1; i <= 100; i++){
        sum += i;

        if(n <= sum){
            printf("%d", i);
            break;
        }
        
    }

    

    return 0;
}