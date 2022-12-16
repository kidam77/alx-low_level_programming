#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest of 3inteders
 * Return: 0
 */

int main(void)
{
	int a, b, c;
	int largest;

	a =  972;
	b = -98;
	c = 0;

	largest = largest_number(a, b, c);

	printf("%d is the largst number\n", largest);

	return (0);
}
