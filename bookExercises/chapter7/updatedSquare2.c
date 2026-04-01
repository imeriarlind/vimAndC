/* Prints a table of squares using a for statement */
#include <stdio.h>
int main(void)
{

    long int i, n;

    printf("This program prints a table of squares.\n");

    printf("Enter number of entries in table: ");
    scanf("%ld", &n);

    for (i = 1; i <= n; i++){
        if ((long)(i*i) < 0){
            printf("the lowest number who is also the same type when squared is %ld\n", --i);
            break;
        }
        printf("%10ld%10ld\n", i, i * i);

    }

    return 0;


}
