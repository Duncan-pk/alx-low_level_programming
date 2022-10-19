#include "main.h"
/**
 * print_last_digit - Entry point
 * @c: is the char to be checked
 * Return: always return 0 (Success)
 */
int print_last_digit(int c)
{
int r;
r = c % 10;
_putchar('0' + r);
_putchar('\n');

return (r);
}
