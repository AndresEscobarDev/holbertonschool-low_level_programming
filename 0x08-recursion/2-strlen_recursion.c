#include "holberton.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s:String.
 * Return: c.
 */
int _strlen_recursion(char *s)
{
	int c = 0;

	if (s[1])
		c  = _strlen_recursion(s + 1);
	c++;
	return (c);
}
