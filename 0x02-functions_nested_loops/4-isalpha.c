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

	r = _isalpha('H');
	r = _isalpha('o');
	r = _isalpha(108);
	r = _isalpha(';');
	r = _isalpha('\n');
	return (0);
}

int _putchar(char c)
{

		return (write(1, &c, 1));
}

int _isalpha(int c)
{
	if (isalpha(c) > 0)
	{
	_putchar(1 + '0');
	}
	else
	{
	_putchar(0 + '0');
	}

}
