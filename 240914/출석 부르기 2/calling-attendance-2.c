#include <stdio.h>

int main() {
    
    int a;

    for(int i = 1; i <= 100; i++){
        scanf("%d", &a);
        if(a == 1){
            printf("John\n");
        }
        else if(a == 2){
            printf("Tom\n");
        }
        else if(a == 3){
            printf("Paul\n");
        }
        else if(a == 4){
            printf("Sam\n");
        }
        else{
            printf("Vacancy\n");
            break;
        }
    }

    return 0;
}