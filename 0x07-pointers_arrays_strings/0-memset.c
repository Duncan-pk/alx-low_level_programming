#include "main.h"
/**
 * _memset - Function
 * @s: buffer
 * @b: copy item
 * @n: array controler
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int x;

	x = (int)n;

	/*loop set for only n characters*/

	for (i = 0; i < x; i++)
	{
	s[i] = b;
	}

	/*output the entire loop*/
return (s);
}
