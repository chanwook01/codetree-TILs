#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 1){
            for(int j = 1; j <= n; j++){
                cnt ++;
                printf("%d ", cnt);   
            }
        }
        else{
            for(int j = 1; j <= n; j++){
                cnt += 2;
                printf("%d ", cnt);
            }
        }
        printf("\n");
    }
    return 0;
}