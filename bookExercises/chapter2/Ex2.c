#include <stdio.h>

#define pi 3.14

int main (void)
{
	int sRadius = 10;
	int rCubed = sRadius * sRadius * sRadius;

	float v = (4.0f/3.0f) * pi * rCubed;

	printf("%.2f", v);

	return 0;
}
