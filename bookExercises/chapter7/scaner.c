#include <stdio.h>

int main(void){

    char a, temp;

    scanf("%c", &a);
    //just a demonstration on how the buffer stores the characters that are not initialized
    do{
        scanf("%c", &temp);
        printf("%c", temp);
    } while (temp != '\n');
}
