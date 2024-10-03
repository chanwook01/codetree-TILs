#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[10][10];
    int arr2nd[10][10];
    int arrtot[10][10];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d ", &arr[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d ", &arr2nd[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == arr2nd[i][j]){
                arrtot[i][j] = 0;
            }
            else
                arrtot[i][j] = 1;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", arrtot[i][j]);
        }
        printf("\n");
    }
    return 0;
}