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
r = print_sign(0);
r = print_sign(0xff);
r = print_sign(-1);

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
	_putchar(1 + '0');
	}
	else if (n == 0)
	{
	_putchar(0 + '0');
	_putchar(';');
	_putchar(' ');
	_putchar(0 + '0');
	}
	else
	{
	_putchar('-');
	_putchar(',');
	_putchar(' ');
	_putchar('/');
	}
	_putchar('\n');

}
