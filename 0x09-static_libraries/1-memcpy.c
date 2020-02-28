#include "holberton.h"
/**
 * _memcpy - Copy n chars from src to dest.
 * @dest: dest of de copy.
 * @src: strng to copy.
 * @n: numbers of chars to copy.
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (n--; n + 1 > 0; n--)
	{
		dest[n] = src[n];
	}
	return (dest);
}
