#include <unistd.h>
#include <ctype.h>
#include "main.h"
/**
 * print_sign - Entry point
 *@n: char to be checked
 * Return: always return 0 (Success)
 */
int print_sign(int n)
{
if (n > 0)
{
	return (1);
}
else if (n == 0)
{
	return (0);
}
else
	return (-1);

}
