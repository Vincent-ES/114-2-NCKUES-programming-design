#include <stdio.h>

int main(){
    int n;

    printf("請輸入直角三角形的高度: ");
    scanf("%d", &n);
    for(int i = 0;i<n;i++){
        for(int j = 0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}