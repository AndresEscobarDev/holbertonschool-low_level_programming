#include "holberton.h"

/**
 * _strncat -  function that concatenates two strings.
 * @dest: 1°char.
 * @src: 2°char.
 * @n: numbers of chars.
 * Return: char.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i])
		i++;

	for (j = 0; src[j] && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
