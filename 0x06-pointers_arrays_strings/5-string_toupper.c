#include "main"

/**
 * string_toupper - changes all lower case letters in string to uppercase
 * @word: pointer to string
 * Return: 0
 */

char *string_toupper(char *word)
{
	int length;

	length = 0;

	while (word[length]++)
	{
		if (word[length] >= 'a' && word[length] <= 'z')
		{
			word[length] -= 32;
		}
	}
	return (word);
}
