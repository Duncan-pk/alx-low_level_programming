#include <unistd.h>
#include <ctype.h>
#include "main.h"
/**
 * main -Entry point
 *
 * Return: always return 0 (Success)
 */
int main(void)
{
	int r;
	r = _islower('H');
	r = _islower('o');
	r = _islower(108);
	_putchar('\n');
	return (0);
}

int _putchar(char c)
{

	return (write(1, &c, 1));
}

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