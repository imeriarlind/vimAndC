#include <stdio.h>

#define SIZE 10


int main(void){

    int numbers [SIZE];

    printf("write 10 numbers: \n");

    for (int i = 0; i < SIZE ; i++ ) {
        scanf("%d", &numbers[i]);
    }

    for (int i = SIZE - 1 ; i >= 0 ; i-- ) {
        printf("[%d],", numbers[i]);
    }
    printf("\n");

}
