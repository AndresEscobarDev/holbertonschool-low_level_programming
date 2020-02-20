#include "holberton.h"

/**
 * cap_string - capitalizes.
 * @s: string.
 * Return: capitalized string.
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
		if (s[i] == ' ' || s[i] == 9 || s[i] == ',' || s[i] == '\n')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= 32;
		}
		if (s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= 32;
		}
		if (s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= 32;
		}
		if (s[i] == '}')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= 32;
		}
	}
	return (s);
}
