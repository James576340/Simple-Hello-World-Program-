/* 
Name: IRUNGU JAMES NDIRANGU 
Registration No: PA106/G/28731/25
Date: 26/10/25
*/

#include <stdio.h>

int main() {
    int secret = 15;    // Fixed secret number (change to test)
    int guess;
    int attempts = 0;

    printf("  NUMBER GUESSING GAME  \n");
    printf("I have a seceret number between 1 and 20.\n");
    printf("Try to guess it!\n\n");

    // Loop until the user guesses correctly
    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secret) {
            printf("Too low!\n");
        }
        else if (guess > secret) {
            printf("Too high!\n");
        }
        else {
            printf("Congratulations!\n");
            break;
        }
    }

    printf("You guessed it in %d attempt(s)!\n", attempts);

    return 0;
}