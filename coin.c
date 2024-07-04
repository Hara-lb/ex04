#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int heads = 0;
    int tails = 0; 

    srand(time(0));

    printf("Tossing a coin...\n");

    for (int i = 1; i < 4; i++) {
        if (rand() % 2 == 0) {
            printf("Round %d: Heads\n",i);
            heads++;
        } else {
            printf("Round %d: Tails\n",i);
            tails++;
        }
    }

    printf("Heads: %d, Tails: %d\n", heads, tails);

    if(heads > tails){
        printf("You won\n");
    }else{
        printf("You lost\n");
    }
    return 0;
}
