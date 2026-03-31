/* Prints a table of squares using a for statement */
#include <stdio.h>
int main(void)
{

    short int i, n;

    printf("This program prints a table of squares.\n");

    printf("Enter number of entries in table: ");
    scanf("%hd", &n);

    for (i = 1; i <= n; i++){
        if ((short)(i*i) < 0){
            printf("the lowest number who is also the same type when squared is %hd\n", --i);
            break;
        }
        printf("%10d%10d\n", i, i * i);

    }

    return 0;


}
