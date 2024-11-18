/*The Hangman Game is one of the most famous games played
on computers.
The Rules of the game are as follows:
1. There is given a word with omitted characters and you
need to guess the characters to win the game.
2. Only 3 chances are available and if you win the Man
survives or Man gets hanged.
So, it is the game can be easily designed in C language with
the basic knowledge of if-else statements, loops, and some
other basic statements. The code of the game is easy, short,
and user-friendly.*/

#include <stdio.h>
#include <string.h>
#define MAX_CHANCES 3
int main() 
{
    char word[] = "hangman";
    char guess[100];
    char maskedWord[100];
    int length = strlen(word);
    int chances = MAX_CHANCES;
    int correctGuess;

    for (int i = 0; i < length; i++) 
    {
        maskedWord[i] = '_';
    }
    maskedWord[length] = '\0'; 

    printf("Welcome to Hangman!\n");
    printf("You have %d chances to guess the word.\n", MAX_CHANCES);
    printf("The word to guess is: %s\n", maskedWord);

    while (chances > 0 && strcmp(maskedWord, word) != 0) 
    {
        printf("Enter your guess: ");
        scanf("%s", guess);
        correctGuess = 0;
        for (int i = 0; i < length; i++) 
        {
            if (word[i] == guess[0]) 
            {
                maskedWord[i] = word[i];
                correctGuess = 1;
            }
        }

        if (correctGuess) 
        {
            printf("Good guess! The word is now: %s\n", maskedWord);
        } 
        else 
        {
            chances--;
            printf("Wrong guess! You have %d chances left.\n", chances);
        }
    }
    if (strcmp(maskedWord, word) == 0) 
    {
        printf("Congratulations! You guessed the word: %s\n", word);
    } 
    else 
    {
        printf("Sorry, you've run out of chances. The word was: %s\n", word);
    }

    return 0;
}