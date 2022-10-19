#include "main.h"
/**
 * times_table - Entry point
 *
 * Return: always return 0 (Success)
 */
void times_table(void)
{
int m, x, z;

for (m = 0 ; m < 10 ; m++)
{
	for (x = 0 ; x < 10 ; x++)
	{
	z = x * m;
	char display[] = 'z';

	for (int a = 0 ; a <= 1 ; a++)
	{
	_putchar(display[a]);
	}
	_putchar(',');
	_putchar(' ');
	}
_putchar('\n');
}


}
