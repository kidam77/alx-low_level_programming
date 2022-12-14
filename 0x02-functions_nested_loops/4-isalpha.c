#include "main.h"

/**
 * _isalpha - checks if c is a character, lowercase or uppercase
 * returns 1 if YES
 * @c: unassigned int value to be compared to ACII value
 * Return: 0 if successful
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
