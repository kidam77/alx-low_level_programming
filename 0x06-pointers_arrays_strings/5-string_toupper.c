#include "main"
#include <stdio.h>

/**
 * string_toupper - changes all lower case letters in string to uppercase
 * @word: pointer to string
 * Return: 0
 */

char *string_toupper(char *word)
{
	int length;

	length = 0;

	while (word[length] != '\0')
	{
		if (word[length] >= 97 && word[length] <= 122)
		{
			word[length] = word[length] - 32;
		}
		length++;
	}
	return (word);
}
