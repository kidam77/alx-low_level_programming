#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to array
 * @n: pointer to elements of an array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int temp, counter;

	n = n - 1;
	counter = 0;

	while (counter <= n)
	{
		temp = a[counter];
		a[counter++] = a[n];
		a[n--] = temp;
	}
}
