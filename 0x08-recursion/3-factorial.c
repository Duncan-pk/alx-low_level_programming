#include "main.h"
/**
 * factorial - function
 * @n: number to get factorial for
 * Return: int
 */
int factorial(int n)
{
	int res = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	res *= factorial(n - 1)

return (res);
}
