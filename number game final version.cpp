#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    int random_num; // Variable where the random number is held.
    int guesses = 0; // A variable to track how many guesses are made.
    int num_of_player; // Variable to store the player's input.

    printf("******************************************\n");
    printf("Welcome to the 'Guess the Number Game' !!!\n");
    printf("Try to guess a number between 1 and 100.\n");
    printf("Be careful! You have only 15 attempts!\n");
    printf("******************************************\n\n");

    srand(time(NULL)); // Seed the random number generator with the current time.
    random_num = 1 + rand() % 100; // Generate a random number between 1 and 100.

    do {
        printf("Please enter an integer between 1 and 100:\n"); // Prompt the player to enter a number.
        scanf("%d", &num_of_player); // Read the player's input.
        guesses++; // Increase the number of guesses.

        if (num_of_player < random_num) {
            printf("Try HIGHER !\n"); // Provide feedback for a low guess.
        } else if (num_of_player > random_num) {
            printf("Try LOWER !\n"); // Provide feedback for a high guess.
        } else {
            printf("\n\n*******************************\n");
			printf("Congratulations! YOU WON\n");
            printf("Attempts: %d\n", guesses);
            printf("Correct Number: %d\n", random_num);
            if (guesses > 10) {
                printf("You can do better next time!\n"); // If more than ten guesses are made, advise the player improving for the next time.
            } else if (guesses < 5) {
                printf("You are too good at this game!\n"); // If the guesses are fewer than five, praise the player.
            }
            printf("*******************************\n");
            break; // Exit the loop on correct guess.
        }

        if (guesses == 10) {
            printf("\nTrials are running out, only '5' attempts left!\n"); // Let the player know when they have ten chances.
        }
    } while (guesses < 15); // Continue the loop until the player has attempted 15 times.

    if (guesses == 15) {
        printf("\nSorry, this was your last attempt. YOU LOST!\n"); // After 15 tries, let the player know that they lost.
    }

    return 0; // Exit the program with a return code of 0.
}

