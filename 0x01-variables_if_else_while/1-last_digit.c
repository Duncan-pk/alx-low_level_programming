#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main -Entry point
 * Description: 'the programs description
 * Return: Always 0 (Success)
 */

int main(void)

{

		int n;
		int m;

		srand(time(0));

		n = rand() - RAND_MAX / 2;

		/* your code goes there */
		m = n % 10;

		/*display output */
		puts("Last digit of ");
		printf("%d", n);
		puts(" is ");
		printf("%d", m);

		if (m > 5)
		{
		puts(" and is greater than 5");
		}
		else if (m == 0)
		{
		puts(" and is 0");
		}
		else
		{
		puts(" and is less than 6 and not 0");
		}

		return (0);

}
