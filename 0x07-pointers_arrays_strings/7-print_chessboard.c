#include "main.h"

/**
  * print_chessboard - print chessboard
  * @a: pointer
  * Return: Always 0
  */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = o; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
i			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
