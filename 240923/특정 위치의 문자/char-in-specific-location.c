#include <stdio.h>

int main() {
    char arr[6] = {'L','E','B','R','O','S'};
    int ch = -1;
    char a;
    
    scanf("%c", &a);

    for(int i = 0; i < 6; i++){
        if(arr[i] == a){
            ch = i;
        }
    }
    if(ch == -1)
        printf("None");
    else
        printf("%d", ch);
    return 0;
}