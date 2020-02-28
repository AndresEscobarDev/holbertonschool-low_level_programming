#include "holberton.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: String.
 * @accept: comparator.
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, b = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				b = 1;
				break;
			}
		}
		if (b == 1)
			break;
	}
	if (s[i] == '\0')
		return ('\0');
	else
		return (&s[i--]);
}
