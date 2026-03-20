#include <stdio.h>

int add (int a , int b){

    return a + b;
}

int main() {
    int a[10];
    printf("%d \n", a[1]); // Error: Index 10 is out of bounds for an array of size 10
    
    a[1]= 5;
    a[2]= 6;
    
    printf("%d", add(a[1],a[2]));

    return 0;
}
