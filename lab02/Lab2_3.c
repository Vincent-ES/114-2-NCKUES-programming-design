#include <stdio.h>

int main(){
    long long int n;
    printf("n = ");
    scanf("%lld", &n);

    long long int check = 1;
    while(n>0){
        if(n - check <= 0){
            break;
        }
        check *= 2;
    }

    if(!(n - check)){
        printf("true");
    }
    else{
        printf("false");
    }

    return 0;
}