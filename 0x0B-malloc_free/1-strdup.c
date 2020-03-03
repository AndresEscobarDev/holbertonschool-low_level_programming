#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory.
 * @str: string to copy.
 * Return: s.
 */
char *_strdup(char *str)
{
	unsigned int n = 0, i;
	char *s;

	if (str == NULL)
		return ('\0');
	if (*str == '\0')
	{
		s = malloc(sizeof(char));
		if (s == NULL)
			return ('\0');
		*s = '\0';
		return (s);
	}
	while (str[n])
		n++;
	s = malloc((n + 1) * sizeof(char));
	if (s == NULL)
		return ('\0');
	for (i = 0; i <= n; i++)
		s[i] = str[i];
	return (s);
}
