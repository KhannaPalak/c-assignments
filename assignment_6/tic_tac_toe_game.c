/*Tic Tac Toe Game
The working of tic tac toe game is same as traditional tic tac toe
having following components:
• Objective: To be the first to make a straight line with
either ‘X’ or ‘O’.
• Game Board: The board consists of a 3×3 matrix-like
structure, having 9 small boxes.
• The computer: Since it is a two-player game each player
gets one chance alternatively. i.e.; first player1 than
player2.
• Moves: The computer starts the game with O. After that
player makes moves alternatively.
• Winning: You win by making your symbol in a row or
diagonal or column. Also, as a part of strategy you need to
block your opponent from forming a straight line while
making of your own.*/

#include <stdio.h>
char board[3][3], player = 'X';  
void Board() 
{
    for (int i = 0; i < 3; i++) 
    { 
        for (int j = 0; j < 3; j++) 
        {
            board[i][j] = '0';  
        }
    }
}
void printBoard() 
{
    printf("\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf(" %c ", board[i][j]);  
            if (j < 2) 
            {
                printf("|");  
            }
        }
        printf("\n");
        if (i < 2) 
        {
            printf("---|---|---\n");
        }
    }
    printf("\n");
}
int checkWin() 
{
    for (int i = 0; i < 3; i++) 
    {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) 
        {
            return 1;  
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) 
        {
            return 1;  
        }
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) 
    {
        return 1;  
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) 
    {
        return 1;  
    }
    return 0; 
}
int checkDraw() 
{
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            if (board[i][j] == '0') 
            {  
                return 0;
            }
        }
    }
    return 1; 
}
void switchPlayer() 
{
    player = (player == 'X') ? 'O' : 'X'; 
}
void makeMove() 
{
    int row, column;
    while (1) 
    {
        printf("Player %c, enter your move (row and column): ", player);
        scanf("%d %d", &row, &column);
        if (row >= 1 && row <= 3 && column >= 1 && column <= 3 && board[row - 1][column - 1] == '0') 
        {
            board[row - 1][column - 1] = player;
            break;  
        } 
        else 
        {
            printf("Invalid move! Please try again.\n");
        }
    }
}
int main() 
{
    Board();  
    while (1) 
    {
        printBoard(); 
        makeMove(); 
        if (checkWin()) 
        {
            printBoard();  
            printf("Player %c wins!\n", player);
            break;
        }
        else if (checkDraw()) 
        {
            printBoard();
            printf("It's a draw!\n");
            break;
        }    
        switchPlayer(); 
    }
 return 0;
}