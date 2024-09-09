#include <stdio.h>

int main() {
    int ter1, ter2, ter3;
    char cou1, cou2, cou3;

    scanf("%c %d\n", &cou1, &ter1);
    scanf("%c %d\n", &cou2, &ter2);
    scanf("%c %d", &cou3, &ter3);

    if(cou1 == 'Y' && ter1 >= 37){
        if((cou2 == 'Y' && ter2 >= 37) || (cou3 == 'Y' && ter3 >= 37))
            printf("E");
        else
            printf("N");   
        
    }
    else {
        if((cou2 == 'Y' && ter2 >= 37) && (cou3 == 'Y' && ter3 >= 37))
            printf("E");
        else
            printf("N");
    }
    return 0;
}