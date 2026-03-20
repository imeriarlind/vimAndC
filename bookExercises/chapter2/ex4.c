#include <stdio.h>

float taxCalculation (float amount)
{
	return amount * (1 + 0.05);
}


int main (void)
{
	float amount ;
	
	printf("write the amount you have befor tax\n");
	scanf("%f", &amount);

	printf("%.2f", taxCalculation(amount));

	return 0;
}
