#include "function_pointers.h"

/**
 * int_index - return element
 * @array: pointer array
 * @size: array size
 * @cmp: pointer function
 * Return: return index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
int result;
for (i = 0; i < size;)
	{
	result = cmp(array[i]);

	if (result == 1)
	{

	break;
	}
	else
	{
	i++;
	}

	}
return (i);
}
