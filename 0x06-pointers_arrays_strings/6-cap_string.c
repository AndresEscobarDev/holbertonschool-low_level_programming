#include "holberton.h"

/**
 * cap_string - capitalizes.
 * @s: string.
 * Return: capitalized string.
 */
char *cap_string(char *s)
{
char d[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
	      '"', '(', ')', '{', '}'};
int i = 0, j;
if (s[i] >= 'a' && s[i] <= 'z')
	s[i] -= 32;
while (s[i])
{
	for (j = 0; j < 13; j++)
	{
		if (s[i] == d[j])
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= 32;
		}
	}
	i++;
}
return (s);
}
