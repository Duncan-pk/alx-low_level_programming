#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * main -Entry point
 *
 * Return: always return 0 (Success)
 */
int main(void)
{
	return (0);
}

int _islower(int c)
{
	if (islower(c) > 0)
	{
	putchar(1 + '0');
	}
	else
	{
	putchar(0 + '0');
	}

}
