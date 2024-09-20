#include <stdio.h>

int main() {
    int n[10];
    int cnt = 0;
    int sum = 0;

    for(int i = 0; i < 10; i ++){
        scanf("%d ", &n[i]);
        if(n[i]==0)
            break;
        else{
            if(n[i] % 2 == 0){
                cnt ++;
                sum += n[i];
            }
        }
    }
    printf("%d %d", cnt, sum);
    return 0;
}