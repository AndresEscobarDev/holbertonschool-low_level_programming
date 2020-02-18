#include "holberton.h"

/**
 * _atoi - Transform char to int.
 * @s: String.
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int i, j, n;

	i = 0;
	n = 0;
	while ((s[i] < '0' || s[i] > '9') && s[i])
	{
		i++;
	}
	for (j = i; s[j] >= '0' && s[j] <= '9'; j++)
	{
		n = (n * 10) + (s[j] - '0');
	}
	if (s[i - 1] == '-')
		n = n * (-1);
	return (n);
}
