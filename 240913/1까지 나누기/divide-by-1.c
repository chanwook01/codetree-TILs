#include <stdio.h>

int main() {
    
    int n;
    int cnt = 0;
    scanf("%d", &n);
    int temp = n;
    for(int i = 1; i <= n; i++){
        temp /= i;
        cnt ++;
        if(temp <= 1){
            break;
        }
    }
    printf("%d", cnt);
    return 0;
}