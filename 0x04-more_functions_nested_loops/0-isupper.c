#include "main.h"
/**
 * _isupper - Entry point
 * @c: user input
 * Return: always return 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
_putchar('\n');
}
