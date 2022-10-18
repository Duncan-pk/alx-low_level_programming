#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: always return 0 (Success)
 */
int main(void)
{
	int i;
	char c;

	for (i = 0 ; i <= 10 ; i++)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
		putchar(c);
		}
		putchar('\n');
	}
	return (0);
}
