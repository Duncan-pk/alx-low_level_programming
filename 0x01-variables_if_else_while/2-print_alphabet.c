#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char C;


	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	for (C = 'a'; C <= 'z'; ++C)
	{
	putchar(C);
	}
	putchar('\n');
	return (0);

}
