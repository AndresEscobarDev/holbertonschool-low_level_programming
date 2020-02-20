#include "holberton.h"

/**
 * string_toupper - Transform all lower case to uppercase.
 * @s: String.
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int i = 0, j;

	while (s[i])
		i++;
	for (j = 0; j < i; j++)
	{
		if (s[j] >= 'a' && s[j] <= 'z')
		{
			s[j] -= 32;
		}
	}
	return (s);
}
