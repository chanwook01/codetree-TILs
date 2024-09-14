#include <stdio.h>

int main() {
    int age;
    int cnt = 0;
    int sum = 0;

    while(1){
        scanf("%d\n", &age);
        if(age >= 20 && age < 30){
            cnt += 1;
            sum += age;
        }
        else{
            break;
        }
    }

    printf("%.2lf", (double)sum / cnt);

    return 0;
}