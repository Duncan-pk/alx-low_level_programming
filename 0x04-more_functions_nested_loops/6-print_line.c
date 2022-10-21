#include "main.h"
/**
 * print_line - Entry point
 * @n: user input
 * Return: always return 0;
 */
void print_line(int n)
{
	if (n < 1)
	{
	_putchar('\n');
	}
	else
	{
		for (x = 0 ; x < n ; x++)
		{
		_putchar('_');
		}
		_putchar('_');
	}
}
