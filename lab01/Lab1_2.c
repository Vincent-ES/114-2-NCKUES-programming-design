#include <stdio.h>

int main(){
    int integer1, integer2, integer3, sum;

    printf("請輸入第一個整數: ");
    scanf("%d", &integer1);
    printf("請輸入第二個整數: ");
    scanf("%d", &integer2);
    printf("請輸入第三個整數: ");
    scanf("%d", &integer3);

    sum = integer1 + integer2 + integer3;

    printf("第一個整數 %d 與第二個整數 %d 與第三個整數 %d的總和為 %d\n", integer1, integer2, integer3, sum);
    return 0;
}