#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always return 0 (Success)
 */
int main(void)
{
	char c[] = "_putchar";
	int i = 0;

	for (i = 0 ; i < 9 ; i++)
	{
		putchar(c[i]);
	}

	putchar('\n');
	return (0);
}
