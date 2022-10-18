#include <unistd.h>
#include <ctype.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: always return 0 (Success)
 */
int main(void)
{
int r;

r = print_sign(98);
_putchar(r + '0');
_putchar('\n');
r = print_sign(0);
_putchar(r + '0');
_putchar('\n');
r = print_sign(0xff);
_putchar(r + '0');
_putchar('\n');
r = print_sign(-1);
_putchar(r + '0');
_putchar('\n');

}

int _putchar(char c)
{

	return (write(1, &c, 1));
}

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	_putchar(',');
	_putchar(' ');
	return (1);
	}
	else if (n == 0)
	{
	_putchar(0 + '0');
	_putchar(';');
	_putchar(' ');
	return (0);
	}
	else
	{
	_putchar('-');
	_putchar(',');
	_putchar(' ');
	return (-1);
	}
	_putchar('\n');

}
