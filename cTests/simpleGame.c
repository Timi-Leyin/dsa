#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;
    int maxAttempts = 10;

    printf("Welcome to the Guess the Number game!\n");
    printf("I'm thinking of a number between 1 and 100. Try to guess it.\n");

   
    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else if (guess > secretNumber) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number %d in %d attempts!\n", secretNumber, attempts);
            break; 
        }

        if (attempts >= maxAttempts) {
            printf("Sorry, you've reached the maximum number of attempts. The secret number was %d.\n", secretNumber);
            break; 
        }
    }

    return 0;
}