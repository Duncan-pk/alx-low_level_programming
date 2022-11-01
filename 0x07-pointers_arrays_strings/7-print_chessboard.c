#include "main.h"
/**
 * print_chessboard - function
 * @a: size
 */
void print_chessboard(char (*a)[8])
{
int i;
int x;

	for (i = 0; a[i][7]; i++)
	{
	for (x = 0; x < 8; x++)
	{
		_putchar(a[i][x]);
	}
	 _putchar('\n');
	}

}
