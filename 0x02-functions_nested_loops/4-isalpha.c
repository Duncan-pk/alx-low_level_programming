#include <unistd.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Entry point
 * Description:'int c'
 * Return: always return 0 (Success)
 */
int _isalpha(int c)
{
	if (isalpha(c) > 0)
	{
	return (1);
	}
	else
	{
	return (0);
	}

}
