#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int cnt = 1;
    for(int i = n; i >= 1; i--){
        for(int j = n; j >= 1; j--){
            if( i < j ){
                printf("  ");
            }
            else{
                if(cnt >= 10){
                    cnt = 1;
                }
                printf("%d ", cnt);
                cnt ++;
            }
        }
        printf("\n");
    }
    return 0;
}