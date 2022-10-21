#include "main.h"
/**
 * print_square - Entry point
 * @size: user input
 * Return:always return 0
 */
void print_square(int size)
{
	if (size < 1)
	{
	_putchar('\n');
	}
	else
	{
		for (int i = 0 ; i < size ; i++)
		{
			for (int x = 0 ; x < size ; x++)
			{
			_putchar('#');
			}
		_putchar('\n');
		}
	}

}
