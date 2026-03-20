#include <stdio.h>
#include <math.h>

float calculator(float first, float second, char shenja) {
    switch (shenja) {
        case '+': return first + second;
        case '-': return first - second;
        case '*': return first * second;
        case '/': 
            if (second == 0) return NAN; // Nuk mund të pjestojmë me zero
            return first / second;
        default: return NAN; 
    }
}

int main() {
    float firstNumber, secondNumber;
    char shenja;

    printf("Jep numrin e pare, shenjen dhe numrin e dyte (p.sh. 5 + 3): ");
    
    // KORRIGJIMI: Përdorim %f, shtojmë &, dhe hapësirë para %c
    if (scanf("%f %c %f", &firstNumber, &shenja, &secondNumber) == 3) {
        float rez = calculator(firstNumber, secondNumber, shenja);
        
        if (isnan(rez)) {
            printf("Gabim: Veprim i pamundur ose shenje e gabuar!\n");
        } else {
            printf("Rezultati: %.2f\n", rez);
        }
    } else {
        printf("Format i gabuar i hyrjes!\n");
    }

    return 0;
}


