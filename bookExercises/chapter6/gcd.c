#include <stdio.h>

int main(void){

    int m, n;

    printf("shkruaj numrin e pare: ");
    scanf("%d", &m);



    printf("shkruaj numrin e dyte: ");
    scanf("%d", &n);

    while(n != 0){
        int temp = m % n;
        m = n;
        n = temp;
    }

    printf("The greatest common divisor is: %d\n", m);

    return 0;
}
