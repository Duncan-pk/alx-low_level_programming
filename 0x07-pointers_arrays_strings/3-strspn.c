#include "main.h"
/**
 * _strspn - function
 * @s: array
 * @accept :loop controler
 * Return: int;
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	while (*s)
	{
	for (j = 0; accept[j]; j++)
	{

		if (*s == accept[i])
		{
			j++;
			break;
		}

		else if (accept[j + 1] == '\0')
		{
			return (i);
		}
	}
	s++;

	}





return (i);

}

