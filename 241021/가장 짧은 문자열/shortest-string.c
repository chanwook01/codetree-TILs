#include <stdio.h>
#include <string.h>

int main() {
    char a[20];
    char b[20];
    char c[20];

    scanf("%s\n%s\n%s", a, b, c);

    int alen = strlen(a);
    int blen = strlen(b);
    int clen = strlen(c);

    if(alen > blen && alen > clen){
        if(blen > clen){
            printf("%d", alen - clen);
        }
        else{
            printf("%d", alen - blen);
        }
    }
    if(blen > alen && blen > clen){
        if(alen > clen)
            printf("%d", blen - clen);
        else
            printf("%d", blen - alen);
    }
    if(clen > alen && clen > blen){
        if(alen > blen)
            printf("%d", clen - blen);
        else
            printf("%d", clen - alen);
    }
    
    return 0;
}