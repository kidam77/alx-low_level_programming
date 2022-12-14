#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: the integer to be checked
 *
 * Return: the last digit
 */

int print_last_digit(int n)

{
	int l = n % 10;

	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
