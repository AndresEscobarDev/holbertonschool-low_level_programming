#include "holberton.h"

/**
 * _strncpy - Copy a string.
 * @dest: dest to paste.
 * @src: origin to copy.
 * @n: number to copy.
 * Return: Dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
