#include <stdio.h>

int main() {
    int n[10];
    int sum = 0;
    int cnt = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d ", &n[i]);

        if(n[i]==0){
            break;
        }
        else{
            sum += n[i];
            cnt ++;
        }
    }
    printf("%d %.1lf", sum, (double)sum / cnt);
    return 0;
}