#include "main.h"
#include <ctype>
/**
 * _isdigit -Entry point
 * @c: user input
 * Return: always return 0 (Success)
 */
int _isdigit(int c)
{
	if (isdigit(c) > 0)
	{

	return (1);
	}
	else
	{
	return (0);
	}
_putchar('\n');
}
