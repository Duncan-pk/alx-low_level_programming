#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator -functio
 * @array: pointer array
 * @size: array size
 * @action: pointer function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

int num = size;
int i = 0;

for (i = 0; i < num; i++)
{
action(array[i]);
}

}
