#include <stdio.h>

int main(){
    char code;

    printf("Starship telemetry code: ");
    scanf("%c", &code);
    if(code<='Z' && code>='A'){
        code = code - 'A' + 'a';//大寫轉小寫
    }

    switch(code){
        case 'n':
            printf("狀態正常");
            break;
        case 's':
            printf("啟動級間分離");
            break;
        case 'o':
            printf("確認進入軌道");
            break;
        case 'w':
            printf("警告：偵測到非致命異常");
            break;
        case 'a':
            printf("致命警報：啟動飛行終止系統！");
            break;
        default:
            printf("輸入錯誤狀態碼");
            break;
    }



    return 0;
}