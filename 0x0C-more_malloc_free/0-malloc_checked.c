#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: value1
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
char* ptr;
char* saved;

ptr = malloc(b);
saved = ptr;

if (ptr == NULL)
{
return ((void *)98);
}

return (saved);
}
