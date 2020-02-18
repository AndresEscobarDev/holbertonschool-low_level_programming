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

	while (src[i])
	{
		i++;
	}
	for (j = 0; j < i && src[j] != '\0'; j++)
		dest[j] = src[j];
	for ( ; j < i; j++)
		dest[j] = '\0';
	return (dest);
}
/*
strncpy(char *dest, const char *src, size_t n)
           {
               size_t i;

               for (i = 0; i < n && src[i] != '\0'; i++)
                   dest[i] = src[i];
               for ( ; i < n; i++)
                   dest[i] = '\0';

               return dest;
           }
*/
