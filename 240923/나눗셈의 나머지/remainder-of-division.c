#include <stdio.h>

int main() {
    int a, b;
    int num[10] = {0,};
    int arr[100];
    int sum = 0;

    scanf("%d %d", &a, &b);

    for(int i = 0; i < 100; i++){
        arr[i] = a % b;
        num[arr[i]]++;
        a = a/b;
        if(a <= 1)
            break;
    }
    for(int i = 0; i <= 9; i++){
        sum += num[i] * num[i];
    }
    printf("%d", sum);
    return 0;
}