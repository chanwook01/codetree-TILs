#include <stdio.h>

int main() {
    
    int a, b, cnt = 0; 
    int sum = 0;
    double avg = 0.0;

    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++){
        if(i % 5 == 0 || i % 7 == 0){
            sum += i;
            cnt ++;
        }
    }
    
    printf("%d %.1lf", sum, 13.1);
    

    return 0;
}