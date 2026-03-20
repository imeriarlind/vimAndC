#include <stdio.h>


void iteration (char a , int n)
{
	for (int i = 0 ; i < n ; i++)
	{
		printf("%c", a);
	}
}

int main (void)
{
	int middleWhitespace, sideWhitespace, matrixSize = 5 ;	
	
	middleWhitespace = matrixSize * 2 - 1;
	sideWhitespace = 0; 



	for ( int i = 0 ; i <= matrixSize ; i ++)
	{
		iteration(' ', sideWhitespace);
		iteration('*', 1);
		iteration(' ', middleWhitespace);

		if(i != matrixSize)
		{
			iteration('*', 1);
		}

		printf("\n");
		
		middleWhitespace -= 2 ;
		sideWhitespace++ ;
	}

	return 0;
}
