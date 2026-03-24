#include <stdio.h>

int main(void){

    float input;
    float maxNr = 0.0f;

    printf("write numbers untill you input 0 or a negative nr ");

    do{
        printf("\nwrite you number: ");
        scanf("%f", &input);

        if(input > maxNr){
            maxNr = input;
        }
    }while(input > 0);

    printf("the biggest nr you inputed was %.2f", maxNr);


    return 0;
}
