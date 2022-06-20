#include "main.h"
/**
* print_chessboard - prints chessboard
* @a: the array
*
*Return: no return, void type function
*
*
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	j = 0;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
