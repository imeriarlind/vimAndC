#include <stdio.h>
#include "stdbool.h"

#define SIZE 10

int main(void){

    bool checkRepetedNumbers [SIZE];
    int number;

    printf("write a number ");
    scanf("%d", &number);

    while (number > 0){

        int temp = number % 10;

        if(checkRepetedNumbers[temp]){
            printf("Repeated digit\n");
            return 0;
        }
        else {
            checkRepetedNumbers[temp] = true;
        }

        number /= 10;
    }


    printf("No Repeated digit\n");
    return  0;
}
