#include "holberton.h"
#include <stdio.h>
/**
 * _strlen - Leng of a string.
 * @s: The String.
 * Return: Always 0.
 */

int _strlen(char *s)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
