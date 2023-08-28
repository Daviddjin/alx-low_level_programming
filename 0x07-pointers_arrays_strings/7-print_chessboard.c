#include "print_chessboard.h"
#include <stdio.h>
#include "main.h"

/**
 * print_chessboard -prints the chessboard.
 * @board: pointer to pieces to print.
 * Return: Always 0 (Success)
 */

void print_chessboard(char board[8][8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(board[i][j]);
		}
		putchar('\n');
	}
}

