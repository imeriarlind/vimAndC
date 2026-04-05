#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define SIZE 10
#define LETTERS 26
#define LEFT 0
#define TOP 1
#define RIGHT 2
#define DOWN 3


int main(void){

    char board [SIZE] [SIZE];
    int row = 0 ;
    int coloumn = 0 ;
    char letter = 'A';

    srand(time(NULL));

    for (int i = 0 ; i < SIZE ; i++) {
        for (int j = 0 ; j < SIZE ; j++) {
            board [i][j] = '.';
        }
    }

    board[0][0] = 'A';

    while (letter < 'Z') {
        int temp = rand() % 4 ;
        if(temp == RIGHT && coloumn + 1  < SIZE && board[row][coloumn + 1 ] == '.'){
            board[row][++coloumn] = ++letter;
        }

        else if (temp == TOP && row + 1 < SIZE && board[row + 1][coloumn] == '.') {
            board[++row][coloumn] = ++letter;
        }

        else if (temp == LEFT && coloumn - 1 >= 0 && board[row][coloumn - 1] == '.') {
            board[row][--coloumn] = ++letter;
        }

        else if (temp == DOWN && row - 1 >= 0 && board[row - 1][coloumn] == '.') {
            board[--row][coloumn] = ++letter;
        }


        bool blocked = true;
        if (coloumn + 1 < SIZE && board[row][coloumn + 1] == '.')
            blocked = false;
        if (coloumn - 1 >= 0 && board[row][coloumn - 1] == '.')
            blocked = false;
        if (row + 1 < SIZE && board[row + 1][coloumn] == '.')
            blocked = false;
        if (row - 1 >= 0 && board[row - 1][coloumn] == '.')
            blocked = false;

        if (blocked) {
            break;
        }
    }

    for (int i = 0 ; i < SIZE ; i++) {
        for (int j = 0 ; j < SIZE ; j++) {
            printf(" %c ", board[i][j]);
        }
        printf("\n");
    }
}
