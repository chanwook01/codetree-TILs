#include <stdio.h>

int main() {
    int cnt[4] = {0, };
    int pat[3];
    char s;

    for(int i = 0; i < 3; i++){
        scanf("%c %d\n", &s, &pat[i]);
        if(s == 'Y' && pat[i] >= 37)
            cnt[0]++;
        else if(s == 'N' && pat[i] >= 37)
            cnt[1]++;
        else if(s == 'Y' && pat[i] < 37)
            cnt[2]++;
        else
            cnt[3]++;
    }

    for(int i = 0; i <= 3; i++){
        printf("%d ", cnt[i]);
    }

    if(cnt[0] >= 2){
        printf("E");
    }
    return 0;
}