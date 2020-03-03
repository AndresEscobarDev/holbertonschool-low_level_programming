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

	if (str == '\0')
		return ('\0');
	if (*str == '\0')
		n = 1;
	else
	{
	while (str[n])
		n++;
	}
	s = malloc((n) * sizeof(char));
	if (s == '\0')
		return ('\0');
	for (i = 0; i <= n; i++)
		s[n] = str[n];
	return (s);
}
