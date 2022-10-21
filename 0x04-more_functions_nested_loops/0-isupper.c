#include "main.h"
#include <ctype>
#include <unistd.h>
/**
 * _isupper - Entry point
 * @c: user input
 * Return: always return 0 (Success)
 */
int _isupper(int c)
{
	if (isupper(c) > 0)
	{
	return (1);
	}
	else
	{
	return (0);
	}
_putchar('\n');
}
