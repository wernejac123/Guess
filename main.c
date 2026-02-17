#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_STRING 30

int rand_num(int lower, int upper){
	return ((rand() % (upper - lower + 1)) + lower);
}

int main(){
	srand((unsigned int)time(NULL)); //seed for random # 
	//use current time

	char input[MAX_STRING];
	int guess, secret_num = rand_num(1, 100);
	system("clear");
	printf("Guess the number!\n");
	//printf("secret number is %d\n", secret_num);

	while(1){
		printf("Please input your guess: ");
		fgets(input, sizeof(input), stdin);
		guess = atoi(input);
		printf("You guessed: %d\n", guess);

		if(guess < secret_num)
			printf("Too small!\n");
		else if(guess > secret_num)
			printf("Too big!\n");
		else{
			printf("You win\n");
			break;
		}
	}

	return 0;
}
