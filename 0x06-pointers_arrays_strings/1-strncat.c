#include <stdio.h>
#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest : first string
 * @src: second string
 * @n: number of bytes to concatenate
 * Return: pointer to designate string
 */

char *_strncat(char *dest, char *src, int n)
{
	int k, l;

	k = 0;

	while (dest[k] != '\0')
	{
		k++;
	}
	for (l = 0; l < n && src[l] != '\0'; l++, k++)
	{
		dest[k] = src[l];
	}
	dest[k] = '\0';
	return (dest);
}
