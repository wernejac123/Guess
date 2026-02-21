#include <stdio.h>
#include <string.h>
#include "version.h"
#include "/usr/local/include/rand.h"
#define MAX_STRING 30

int main(int argc, char *argv[]){
	if((argc == 2) && ((strcmp(argv[1], "-v") == 0) || 
(strcmp(argv[1], "--version") == 0))){
		printf("%s\n", VERSION);
		return 0;
	}

	/*fy_rand() sets the seed*/

	char input[MAX_STRING];
	int fy_arr[100]; /*array for fisher yates shuffle algorithm*/

	for(int i = 0; i < 100; i++)
		fy_arr[i] = i;

	int guess, secret_num;
	fy_rand(fy_arr, 100);
	secret_num = fy_arr[0];

	system("clear");
	printf("Guess the number!\n");
	/*printf("secret number is %d\n", secret_num);*/

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
