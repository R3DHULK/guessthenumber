#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int number, guess, nguesses=1;
	srand(time(0));

	// Generates a random number between 1 and 100
	number = rand()%100 + 1;
	
	// printf("The number is %d\n", number);
	// Keep running the loop
	// until the number is guessed
	do
	{
		printf("Guess the number between 1 to 100 : ");
		scanf("%d", &guess);
		if(guess>number)
		{
			printf("you guessed to high\n");
		}
		else if(guess<number)
		{
			printf("you guessed too low\n");
		}
		else
		{
			printf("You guessed the correct number");
			printf("attempts : %d\n", nguesses);
		}
		nguesses++;
	} while(guess!=number);
	
	return 0;
}