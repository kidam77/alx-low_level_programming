#include "main.h"

/**
 * print_alphabet_x10 - print a - z ten times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int x;
	char y;

	for (x = 0; x <= 10; i++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
