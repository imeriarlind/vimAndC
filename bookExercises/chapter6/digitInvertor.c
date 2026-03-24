#include <stdio.h>


int main(void){
    int value, inverted;

    printf("Write the number you want to invert: ");
    scanf("%d", &value);

    while ( value >= 1) {
        int temp = value % 10;
        inverted = inverted * 10 + temp;
        value /= 10;
    }

    printf("numri i invertuar eshte: %d\n", inverted);
}
