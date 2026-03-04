#include <stdio.h>

int main() {
    int a, b, temp; // temp 是空杯子

    printf("請輸入兩個整數 a 和 b: ");
    scanf("%d %d", &a, &b);
    printf("交換前: a = %d, b = %d\n", a, b);
    
    // TODO: 請在下方撰寫程式碼來交換 a 與 b 的值
    // 只能使用 a, b, temp 這三個變數
    /* 作答區開始 */
    temp = a;
    a = b;
    b = temp;

    /* 作答區結束 */
    printf("交換後: a = %d, b = %d\n", a, b);
    return 0;
}
