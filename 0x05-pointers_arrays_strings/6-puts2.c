#include "main.h"
/**
 * puts2 - function
 * @str: pointer
 */
void puts2(char *str)
{
int i = 0;

for (; str[i] != '\0'; i++)
{
	if ((i % 2) == 0)
		_putchat(str[i]);
	else
		continue;
}
_putchar('\n');


}
