#include "holberton.h"

/**
 * _strcpy - function that copies the string.
 * @dest: Destiny.
 * @src: String.
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i])
	{
		i++;
	}
	for (j = 0; j < i; j++)
		*(dest + j) = *(src + j);
		*(dest + i) = '\0';
	return (dest);
}
