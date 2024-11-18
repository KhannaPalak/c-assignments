/*Rock Paper Scissor is (which also called Stone Paper
Scissor) is a hand game and played between two people, in
which each player simultaneously forms one of three shapes.
The winner of the game is decided as per the below rules:
• Rock vs Paper -> Paper wins.
• Rock vs Scissor -> Rock wins.
• Paper vs Scissor -> Scissor wins.
In this game, the user will be asked to make choice and
according to the choice of user and computer and then the
result will be displayed along with the choices of both computer
and user.
Note: This random number will decide the choice of computer
as:
• If the number is between 0-33 then the choice will be
Stone.
• If the number is between 33-66 then the choice will be
Paper.
• If the number is between 66-100 then the choice will be
Scissors.*/

#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int userChoice;
    int computerChoice;
    const char *choices[] = {"Rock", "Paper", "Scissors"};
    printf("Enter your choice:\n");
    printf("0: Rock\n");
    printf("1: Paper\n");
    printf("2: Scissors\n");
    printf("Your choice: ");
    scanf("%d", &userChoice);
    if (userChoice < 0 || userChoice > 2) 
    {
        printf("Invalid choice! Please enter 0, 1, or 2.\n");
        return 1;
    }
    int randomNum = rand() % 100;
    if (randomNum < 33) 
    {
        computerChoice = 0;
    } 
    else if (randomNum < 66) 
    {
        computerChoice = 1;
    } 
    else 
    {
        computerChoice = 2;
    }
    printf("Your choice: %s\n", choices[userChoice]);
    printf("Computer's choice: %s\n", choices[computerChoice]);
    if (userChoice == computerChoice) 
    {
        printf("It's a tie!\n");
    }
    else if ((userChoice == 0 && computerChoice == 2) ||
               (userChoice == 1 && computerChoice == 0) ||
               (userChoice == 2 && computerChoice == 1)) 
    {    
        printf("You win!\n");
    } 
    else 
    {
        printf("Computer wins!\n");
    } 
   
    return 0;
}