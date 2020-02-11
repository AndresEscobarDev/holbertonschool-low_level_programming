#include "holberton.h"

/**
 * _isalpha - alpha.
 * @c: the question.
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
