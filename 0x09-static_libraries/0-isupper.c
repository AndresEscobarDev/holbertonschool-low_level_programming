#include "holberton.h"
/**
 * _isupper - mayusculas.
 * @c: character.
 * Return: nothing.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
