#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * fizzBuzz - Entry point
 * Return: always return 0
 */
int main(void)
{
fizzBuzz();

return (0);
}

void fizzBuzz(void)
{
int x;

for (x = 0 ; x <= 100 ; x++)
{
	if (x % 3 == 0 && x % 5 == 0)
	{
	printf("%s" , "FizzBuzz");
	}
	else if (x % 3 == 0)
	{
	printf("%s", "Fizz");
	}
	else if (x % 5 == 0)
	{
	printf("%s", "Buzz");
	}
	else
	{
	printf("%d", x);
	}
printf(" ");
}

}
