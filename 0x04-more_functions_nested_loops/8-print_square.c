#include "main.h"
/**
 * print_square - Entry point
 * @size: user input
 * Return:always return 0
 */
void print_square(int size)
{
	int i;
	int x;

	if (size < 1)
	{
	_putchar('\n');
	}
	else
	{
		for (i = 0 ; i < size ; i++)
		{
			for (x = 0 ; x < size ; x++)
			{
			_putchar('#');
			}
		_putchar('\n');
		}
	}

}
