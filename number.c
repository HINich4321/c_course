#include <stdio.h>
#include <stdlib.h>
#include <time.h> // for random number generator seed

int main() {
  int randomNumber = 0;
  int guess = 0;
  int numberofguesses;
  time_t t;

  //initialization of random number generator
  srand((unsigned) time(&t));

  //get the random number
  randomNumber = rand() % 21;

  printf("This is a guessing game.\n");
  printf("I have choosen a number between 0 and 20, which you must guess\n");

  for(numberofguesses = 5; numberofguesses > 0; --numberofguesses) {
    printf("\nYou have %d tr%s left.\n", numberofguesses, numberofguesses == 1 ? "y" : "ies" );
    printf("\nEnter a guess: ");
    scanf("%d\n", &guess);

    if(guess == randomNumber) {
      printf("\nCongratulations. You guessed it!\n");
      return;
    } else if(guess < 0 || guess > 20) {
      printf("Invalid number.");
    } else if(randomNumber > guess) {
      printf("%d is wrong. Guess higher\n", guess);
    } else if(randomNumber < guess) {
      printf("%d is wrong. Guess lower", guess);
    }
  }

  printf("\nYou have had five tries and failed. The number was %d\n", randomNumber);

  return 0;
}
