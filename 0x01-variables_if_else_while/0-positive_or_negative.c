#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */
/* betty style doc for function main goes there */
/*Return: Always 0 (Success) */
/*function main */
int main(void)

{

		int n;

		srand(time(0));

		n = rand() - RAND_MAX / 2;

		/* your code goes there */
		if (n > 0)
		{
		printf("%d", n);
		puts(" is positive");
		}
		else if (n == 0)
		{
		printf("%d", n);
		puts(" is zero");
		}
		else
		{
		printf("%d", n);
		puts(" is negative");
		}
		return (0);

}
