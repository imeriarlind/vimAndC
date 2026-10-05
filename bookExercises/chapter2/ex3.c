#include <stdio.h>

#define pi 3.14

int main (void)
{
	int sRadius;

	printf("write the radius of the sphere \n");
	scanf("%d", &sRadius);

	int rCubed = sRadius * sRadius * sRadius;

	float v = (4.0f/3.0f) * pi * rCubed;

	printf("%.2f \n", v);

	return 0;
}
