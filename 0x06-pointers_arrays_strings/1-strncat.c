#include "main.h"
/**
 * _strncat - function 
 * @dest: pointer
 * @src: second pointer
 * @n: loop controller
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
	{
	i++;
	}

	j = 0;
	
	while (j < n)
	{
		if(src[j] == '\0')
		break;
		else
		{
		dest[i] = src[j];
		i++;
		j++;
		}
	}
dest[i] = '\0';
return (dest);
}
