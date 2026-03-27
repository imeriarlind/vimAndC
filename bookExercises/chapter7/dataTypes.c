#include <stdio.h>

int main(void){
    //character scanf and printf

    char firstChar, secondChar;
    //if there isn't a blank in the char it cant work perfectly
    scanf("%c",&firstChar);
    printf("printing the char without blank %c\n", firstChar);



    //if there is a blank in the char then the scanf with skip the blanks and work perfectly
    scanf(" %c", &secondChar);
    printf("printing the char with blank %c\n", secondChar);

    //if we print c whithout blank than the compiler registers whitespace as a char and leaves the actual char writen
    // in the buffer
    // but if there is a blank in the scanf than it tells the compilr to skip whitespaces

}
