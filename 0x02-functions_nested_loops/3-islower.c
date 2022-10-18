#include <unistd.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower -Entry point
 * c - input
 * Return: always return 0 (Success)
 */
int _islower(int c)
{
	if (islower(c) > 0)
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
	return (0);
}
