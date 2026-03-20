#include <stdio.h>

int main (void)
{
	int a;
	int* p = &a;

	scanf("%d", p);

	printf("%d", a);

	return 0;
}
