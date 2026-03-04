#include <stdio.h>

int main() {
    int attack;         // 基礎攻擊力
    float speed;        // 攻擊速度
    int critRate;       // 爆擊機率 (整數)
    float dps;          // 計算結果

    printf("=== 角色傷害計算器 ===\n");

    // 輸入資料 (TODO: 請填入正確的格式指定字，如 %d 或 %f以及對應的變數)
    printf("請輸入基礎攻擊力: ");
    scanf("%d", &attack);  

    printf("請輸入攻擊速度 (次/秒): ");
    scanf("%f", &speed);

    printf("請輸入爆擊機率 (%%): "); // 這裡的 %% 是為了印出 % 符號
    scanf("%d", &critRate);

    printf("-----------------------\n");

    // 運算邏輯 (TODO: 請依據公式完成計算)
    // 注意：爆擊率是整數 (如 50)，直接除以 100 會發生什麼事？
    
    dps = attack*speed*(1+critRate/(float)100);

    // 輸出結果 (TODO: 請讓 DPS 只顯示到小數點後兩位)
    printf("計算結果：\n");
    printf("該角色的 DPS 為: %.2f\n", dps);

    return 0;
}
