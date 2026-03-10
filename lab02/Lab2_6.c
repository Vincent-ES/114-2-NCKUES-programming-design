#include <stdio.h>

int main(){
    int weight,sum = 0, count = 0;
    float ave;

    while(1){
        printf("輸入重量: ");
        scanf("%d", &weight);
        if(weight < 0){
            printf("Skip!\n");
            continue;
        }
        if(weight == 999){
            printf("Shutdown!\n");
            break;
        }
        sum += weight;
        count++;
    }

    printf("\n");
    if(count>0){
        ave = (float)sum/count;
        printf("Valid count: %d\n", count);
        printf("Average weight: %.2f", ave);
    }
    else{
        printf("No valid data");
    }

    return 0;
}