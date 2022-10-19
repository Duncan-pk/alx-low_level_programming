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
_putchar(r + '0');

return (r);
}
