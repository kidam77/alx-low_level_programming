#include "main.h"

/**
 * _islower - checks for lowercase characters, if YES it returns 1
 * if NO it returns 0
 * @c: isthe int value to be compared to the ACII value
 * Return: 0 if failure
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
