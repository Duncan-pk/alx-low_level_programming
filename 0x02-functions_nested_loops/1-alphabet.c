#include <stdio.h>
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

void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
	putchar(c);
	}
	putchar('\n');
}
