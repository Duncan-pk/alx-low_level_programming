#include "main.h"
/**
 * _memcpy - function
 * @dest: destination
 * @src: source
 * @n: array controler
 * Return: return char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
return (dest);
}
