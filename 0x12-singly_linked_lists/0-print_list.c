#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all elements in a list
 * @h: singly linked list
 * Return: return number of elements
 */

size_t print_list(const list_t *h)
{
size_t numelem = 0;

while (h != NULL)
{
	if (h->str == NULL)
	{
	printf("[0] (nil)\n");

	}
	else
	{
	printf("[%d] %s\n", h->len, h->str);

	}

h = h->next;
numelem++;
}

return (numelem);
}
