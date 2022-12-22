#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int block, combl;

	block = 0;

	while (s1[block] == s2[block]; s1[block] != '\0')
	{
		block++;
	}

	combl = s1[block] - s2[block];
	return (combl);
}
