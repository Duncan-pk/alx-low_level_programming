#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always return 0 (Success)
 */
int main(void)
{
	for (int i = 0 ; i < 10 ; i++)
	{

	putchar(i + '0');
	}

	for (char c = 'a' ; c <= 'f' ; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
