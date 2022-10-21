#include "main.h"
/**
 * more_numbers - Entry point
 * Return: always return 0 ( Success)
 */
void more_numbers(void)
{
	int y;
	int x;
	int a;
	int b;
for (y = 0 ; y < 10 ; y++)
{
	for (x = 0 ; x < 15 ; x++)
	if (x > 9 )
	{
	a = x / 10;
	b = x % 10;
	_putchar(a + '0');
	_putchar(b + '0');
	}
	else
	{
	_putchar(x + '0');
	}
_putchar('\n');
}
}
