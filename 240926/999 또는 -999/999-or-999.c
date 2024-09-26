#include <stdio.h>

int main() {
    int num[999];
    int max;
    int min;

    for(int i = 0; i < 999; i++){
        scanf("%d ", &num[i]);
        if(i == 0){
            max = num[i];
            min = num[i];
        }
        if(num[i] == 999 || num[i] == -999)
            break;
        if(num[i] >= max)
            max = num[i];
        if(num[i] <= min)
            min = num[i];
    }

    printf("%d %d", max, min);

    return 0;
}