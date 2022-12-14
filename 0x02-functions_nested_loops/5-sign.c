#include "main.c"

/**
 * print_sign - prints the sign of a number
 * @n: numnber to be checked
 * Return: 0 or 1 (Success)
 */

int print_sign(int n)
{
	int check;

	if (n > 0)
	{
		check = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		check = 0;
		_putchar('0');
	}
	else
	{
		check = -1;
		_putchar('-');
	}
	return (check);
}
