#include <stdio.h>

int main (void)
{
    double balance, credit , debit;
    int cmd;

    printf("Welcome to ACME a balacing program \n");
    printf("---------------------------------------------------------------------------\n");
    printf("Commands: 0=clear, 1=credit, 2=debit, ");
    printf("3=balance, 4=exit\n\n");

    while(1)
    {
        printf("\nWrite your number: ");
        scanf("%d", &cmd);
        switch (cmd)
        {
        case 0:
            balance = 0;
            break;

        case 1:
            printf("\nWrite the amount you want to credit: ");
            scanf("%lf", &credit);
            balance = balance + credit;
            break;
        
        case 2:
            printf("\nWrite the amount you want to debit: ");
            scanf("%lf", &debit);
            balance -= debit;
            break;
        
        
        case 3:
            printf("\nyour balance has in store: %.1f", balance);
            break;
        
        case 4:
            printf("\nEXIT");
            return 0;
        
        default:
            printf("\nyou wrote a wrong number or comand\n try again:  ");
            break;
        }
    }

    return 0;
}