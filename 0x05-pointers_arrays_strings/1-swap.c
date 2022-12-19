#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers
 * @a: first value
 * @b: second value
 * int c: address the swapped value will be sent to
 * Return: Alwaays 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
