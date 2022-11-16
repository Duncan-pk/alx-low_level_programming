#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function to print to a name
 * @name: name arg
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{

(f(name));

}
