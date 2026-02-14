#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "version.h"

#define MAX_STRING 30

static inline int rand_num(int lower, int upper){
	return ((rand() % (upper - lower + 1)) + lower);
}

int main(int argc, char *argv[]){
   	system("clear");

	if((argc == 2) && ((strcmp(argv[1],"-v") == 0) || (strcmp(argv[1], "--version") == 0))){
		printf("%s\n", VERSION);
		exit(0);
	}

	srand((unsigned int)time(NULL)); //seed for random # 
	//use current time

	char input[MAX_STRING];
	unsigned guess, secret_num = (unsigned)rand_num(1, 100);

	printf("Guess the number!\n");
	//printf("secret number is %d\n", secret_num);

	while(1){
		printf("Please input your guess: ");
		fgets(input, sizeof(input), stdin);
		guess = (unsigned)atoi(input);
		printf("You guessed: %u\n", guess);

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
