#include "main.h"
/**
 * print_most_number - Entry point
 * Return: always return 0 (Success)
 */
void print_most_number(void)
{
	for (int x = 0 ; x < 10 ; x++)
	{
		if (x == 2 || x == 4)
		{
		x++;
		}
		else
		{
		_putchar(x + '0');
		}
	}
_putchar('\n');
}
