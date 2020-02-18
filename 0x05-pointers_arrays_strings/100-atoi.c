#include "holberton.h"

/**
 * _atoi - Transform char to int.
 * @s: String.
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int i, j, n;
	unsigned int m;

	i = 0;
	m = 0;
	while ((s[i] < '0' || s[i] > '9') && s[i])
	{
		i++;
	}
	for (j = i; s[j] >= '0' && s[j] <= '9'; j++)
	{
		m = (m * 10) + (s[j] - '0');
	}
	if (s[i - 1] == '-' && i > 0)
	{
		n = m * (-1);
		return (n);
	}
	else
		return (m);
}
