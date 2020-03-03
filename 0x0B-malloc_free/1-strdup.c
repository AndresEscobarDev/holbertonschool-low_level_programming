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
	unsigned int n = 0;
	char *s;

	if (str == '\0')
		return ('\0');
	while (str[n])
		n++;
	s = malloc(n * sizeof(char));
	if (s == '\0')
		return ('\0');
	for (n = 0; str[n]; n++)
		s[n] = str[n];
	return (s);
}
