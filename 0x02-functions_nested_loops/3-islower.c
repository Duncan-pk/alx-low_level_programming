#include <unistd.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower -Entry point
 *
 * Return: always return 0 (Success)
 */
int _islower(int c)
{
	if (islower(c) > 0)
	{
	_putchar(1 + '0');
	}
	else
	{
	_putchar(0 + '0');
	}

}
