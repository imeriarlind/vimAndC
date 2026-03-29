#include <stdio.h>

int main(void){

    char message;

    printf("write the message and i will calculate the length of it: ");
    scanf("%c", &message);

    int i = 1;

    while (getchar() != '\n') {
        i++;
    }

    printf("the length of your message is %d\n", i);
}
