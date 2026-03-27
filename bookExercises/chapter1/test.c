#include <stdio.h>

int add (int a , int b){

    return a + b;
}

int main() {
    int a[10];
    //even do the 15th index doesent exist C doesent check for index out of bounds and doesent return any errors
    //to have this error checked you can use lint before compiling so you have better error controll
    printf("%d \n", a[15]);

    a[1]= 5;
    a[2]= 6;

    printf("%d", add(a[1],a[2]));

    return 0;
}
