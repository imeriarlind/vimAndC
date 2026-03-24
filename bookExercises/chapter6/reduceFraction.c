#include <stdio.h>

int main(void){

    int numerator, denominato, devider;

    printf("shkruaj numrin e pare: ");
    scanf("%d", &numerator);



    printf("shkruaj numrin e dyte: ");
    scanf("%d", &denominato);
    int m = numerator;
    int n = denominato;

    while(n != 0){
        int temp = m % n;
        m = n;
        n = temp;
    }

    printf("the reduces fraction is %d/%d\n", (numerator / m), (denominato / m));

    return 0;
}
