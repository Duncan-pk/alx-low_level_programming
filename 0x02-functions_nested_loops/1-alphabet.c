#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: always return 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

int _putchar(char c)
{

	return (write(1, &c, 1));
}

void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
