#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: always return 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
