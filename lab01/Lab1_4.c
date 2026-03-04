#include <stdio.h>

int main() {
    // 變數宣告
    float fileSizeGB;   // 檔案大小 (GB)
    float downloadSpeed; // 下載速度 (MB/s)
    float fileSizeMB;   // 檔案大小 (MB)
    int totalSeconds;   // 總共需要的秒數 (整數)
    int hours, minutes, seconds; // 用來顯示的時間變數

    // 1. 輸入資料
    printf("請輸入檔案大小 (GB): ");
    scanf("%f", &fileSizeGB);
    printf("請輸入下載速度 (MB/s): ");
    scanf("%f", &downloadSpeed);
    printf("-----------------------\n");

    // 2. 運算邏輯 (TODO: 請同學完成下列算式以及程式片段)
    
    // 將 GB 換算成 MB (1 GB = 1024 MB)
    fileSizeMB = fileSizeGB * 1024; 

    // 計算總秒數 (總量 / 速度)
    // 提示: 算出來會是小數，請強制轉型為整數 (int) 去掉小數點
    totalSeconds = (int)(fileSizeMB/downloadSpeed);

    // 時間格式轉換 (利用 / 與 %)
    // 1小時 = 3600秒，1分鐘 = 60秒
    // 算出扣除小時後，還剩下多少秒...
    hours = totalSeconds/3600;
    minutes = (totalSeconds%3600)/60;
    seconds = (totalSeconds%60);
    

    // 3. 輸出結果
    printf("檔案總大小: %.2f MB\n", fileSizeMB);
    printf("預估下載總秒數: %d 秒\n", totalSeconds);
    printf("剩餘時間: %d 小時 %d 分 %d 秒\n", hours, minutes, seconds);

    return 0;
}
