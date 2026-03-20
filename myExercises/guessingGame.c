#include <stdio.h>
#include <stdlib.h>
#include <time.h>



bool compare(int guess , int actualNumber){
	if(guess == actualNumber){
		return true;
	}
	return false;
}



int main(){
	
	srand(time(NULL));
	int generatedNumber = (rand() % 10) +1 ;	
	int guess;

	printf("we are starting the game of guessing \n ==============================================================\n\n");
	
	printf("guess the numger \n =================================================================== \n\n");

	while(true){

		scanf("%d \n", &guess);
		
		if(guess == generatedNumber){
			printf("you win");
			return 0;
		}
		printf("wrong one try agani \n ============================================================== \n \n");
	}
	

}
