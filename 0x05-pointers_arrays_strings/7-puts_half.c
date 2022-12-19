#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: provided string
 * Return: Always 0
 */

void puts_half(char *str)
{
	int count = 0, half;

	while (str[count] == '\0')
		count++;

	half = count / 2;
	if (count % 2 == 1)
		count++;

	while (half < count)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
