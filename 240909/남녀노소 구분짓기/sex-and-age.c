#include <stdio.h>

int main() {
    int gen, age ;

    scanf("%d\n", &gen);
    scanf("%d", &age);

    if(gen == 0){
        if(age >= 19){
            printf("MAN");
        }
        else
            printf("BOY");
    }
    else{
        if(age >= 19){
            printf("WOMAN");
        }
        else
            printf("GIRL");
    }
    return 0;
}