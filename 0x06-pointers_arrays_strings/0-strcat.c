#include "holberton.h"
/**
 * _strcat -  function that concatenates two strings.
 * @dest: 1°char.
 * @src: 2°char.
 * Return: char.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i])
		i++;

	for (j = 0; src[j]; j++)
	{
		dest[i] += src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
