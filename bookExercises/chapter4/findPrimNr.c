#include <stdio.h>
#include <stdbool.h>


//my way of finding if the nr is prime 
bool findPrime(int n)
{   

    if (n < 2)
    { 
        printf("the nr is not prime\n");
        return false;
    }

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {  
            printf("the nr is not prime\n");
            return false;
        }
    }

    printf("the nr is prime\n");
    return true;
}

//the book version 
bool findPrimeKingVersion(int n)
{
    if (n < 2) return false;

    int i;
    // The loop body is just a semicolon
    for (i = 2; i * i <= n && n % i != 0; i++) ; 

    // If the loop finished because n % i == 0, it's not prime.
    // If it finished because i * i > n, it IS prime.
    
    return (i * i > n);

}

int main(void)
{
    int number;

    printf("Write the number that you want to test if it is prime\n");
    scanf("%d", &number);

    //the normal for loop that i wuld do it like 
    findPrime(number);
    if (findPrimeKingVersion(number))
    {
        printf("the nr is prime\n");
    }
    else{
        printf("the nr is not prime\n");
    }

    
}