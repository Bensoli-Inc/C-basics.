#include <stdio.h>
#include <stdlib.h>


//ths game will allow user to guess a secret number, i dfine the secret number and then allow the user to guess it until they get it
int main () {
    int secretNumber = 5; //my number
    int guess = 0; // to store user's guess
    int guessCount = 0; //gonna get increamented whenever the user gues
    int guessLimit = 3;
    int outOfGuesses = 0;

    while(guess != secretNumber && outOfGuesses == 0) {
        if(guessCount < guessLimit) {
             printf("Guess the secret number");
            scanf("%d", &guess);
            guessCount++;
        } else {
            outOfGuesses = 1;
        }
    }
    if (outOfGuesses == 1) {
        printf("Out of guesses\n");
    } else {
            printf("Congratulations! You Win 1000kes.\n");
    }
    return 0;
}