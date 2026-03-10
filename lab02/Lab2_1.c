#include <stdio.h>

int main(){
    int intensity;

    printf("地震震度 (0-7): ");
    scanf("%d", &intensity);
    if(intensity>=6 && intensity<=7){
        printf("國家級警報！立即掩蔽 !\n");
    }
    else if(intensity<=5 && intensity>=4){
        printf("強烈地震！請遠離窗戶\n");
    }
    else if(intensity<=3 && intensity>=2){
        printf("中度地震。請保持冷靜\n");
    }
    else if(intensity<=1 && intensity>=0){
        printf("微小地震。無需動作\n");
    }
    else{
        printf("Invalid input.\n");
    }




    return 0;
}