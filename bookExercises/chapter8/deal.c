#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "stdbool.h"

int main(void){

    int nr_of_cards;
    int temp_rank, temp_suit;
    bool in_hand [4] [13] = {false};
    char rank [13] = {'A','2','3','4','5','6','7','8','9','0','J','Q','K'};
    char suit [4] = {'D','S','H','C'};

    srand(time(NULL));

    printf("enter the nr of cards you want delt: ");
    scanf("%d", &nr_of_cards);

    while (nr_of_cards > 0) {
        temp_rank = rand() % 13;
        temp_suit = rand() % 4;

        if(!in_hand[temp_suit][temp_rank]){
            printf("%c of %c", rank[temp_rank], suit[temp_suit]);
            in_hand[temp_suit][temp_rank] = true;
            nr_of_cards--;
            printf("\n");
        }

    }
    return 0;
}
