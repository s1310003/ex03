#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));  

    int rounds = 3;
    int headsCount = 0;
    int tailsCount = 0;

    printf("Tossing a coin...\n");
    for (int round = 1; round <= rounds; round++) {
        int toss = rand() % 2; 
        if (toss == 0) {
            headsCount++;
            printf("Round %d: Heads\n", round);
        } else {
            tailsCount++;
            printf("Round %d: Tails\n", round);
        }
    }

    printf("Heads: %d, Tails: %d\n", headsCount, tailsCount);

    if (headsCount > tailsCount) printf("You won\n");
    else printf("You lost\n");
    
    return 0;
}
