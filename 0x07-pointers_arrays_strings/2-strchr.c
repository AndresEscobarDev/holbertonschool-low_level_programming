#include "holberton.h"
/**
 * _strchr - locates a character in a string.
 * @s: String.
 * @c: c: char to copy.
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != c && s[i])
		i++;
	if (s[i] == '\0')
		return ('\0');
	else
		return (&s[i]);
}
