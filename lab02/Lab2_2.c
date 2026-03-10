#include <stdio.h>

int main(){
    int hits;
    int total = 0;
    int counter = 0;
    float average;

    printf("Hits per game (-1 to end): ");
    while(scanf("%d", &hits) && hits != -1){
        printf("Hits per game (-1 to end): ");
        total += hits;
        counter++;
    }

    if(!counter){
        printf("\nNo games played yet");
    }
    else{
        average = (float)total/counter;
        printf("\nTotal games: %d\n", counter);
        printf("Total hits: %d\n", total);
        printf("Average hits per game: %.2f", average);

    }
    return 0;
}