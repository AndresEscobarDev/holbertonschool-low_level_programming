#include "holberton.h"
/**
 * _memset - change the content of  *s.
 * @s: String.
 * @b: New byte.
 * @n: number to change.
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (n--; n + 1 > 0; n--)
	{
		s[n] = b;
	}
	return (s);
}
