#include <stdio.h>

int main() {
    int cnt = 0;
    int sum = 0;
    int sub[4];
    int n;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d ", &sub[j]);
            sum += sub[j];
        }
        if(sum / 4 >= 60){
            printf("pass\n");
            cnt ++;
        }
        else
            printf("fail\n");
        sum = 0;
    }
    printf("%d", cnt);
    return 0;
}