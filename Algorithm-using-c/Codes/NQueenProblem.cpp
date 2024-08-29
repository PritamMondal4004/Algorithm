#include <stdio.h>
#include <stdbool.h>

#define SIZE 4  


void displayBoard(int chessboard[SIZE][SIZE])
{
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            if (chessboard[row][col])
                printf("Q ");
            else
                printf(". ");
        }
        printf("\n");
    }
}


bool isPositionSafe(int chessboard[SIZE][SIZE], int row, int col)
{
    int i, j;


    for (i = 0; i < col; i++)
        if (chessboard[row][i])
            return false;

 
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (chessboard[i][j])
            return false;

   
    for (i = row, j = col; j >= 0 && i < SIZE; i++, j--)
        if (chessboard[i][j])
            return false;

    return true;
}


bool solveQueensUtil(int chessboard[SIZE][SIZE], int col)
{

    if (col >= SIZE)
        return true;

    for (int row = 0; row < SIZE; row++) {
       
        if (isPositionSafe(chessboard, row, col)) {
           
            chessboard[row][col] = 1;

       
            if (solveQueensUtil(chessboard, col + 1))
                return true;

        
            chessboard[row][col] = 0;
        }
    }

    return false;
}


bool solveNQueens()
{
    int chessboard[SIZE][SIZE] = { { 0 } };

    if (!solveQueensUtil(chessboard, 0)) {
        printf("No solution exists\n");
        return false;
    }

    displayBoard(chessboard);
    return true;
}


int main()
{
    solveNQueens();
    return 0;
}
