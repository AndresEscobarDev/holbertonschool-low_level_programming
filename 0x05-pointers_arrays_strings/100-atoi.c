#include "holberton.h"

/**
 * _atoi - Transform char to int.
 * @s: String.
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int n;
	unsigned int i, j, m, sig;

	i = 0;
	m = 0;
	sig = 0;
	while ((s[i] < '1' || s[i] > '9') && s[i])
	{
		if (s[i] == '-')
			sig++;
		i++;
	}
	for (j = i; s[j] >= '0' && s[j] <= '9'; j++)
	{
		m = (m * 10) + (s[j] - '0');
	}
	if (sig % 2 != 0)
	{
		n = m * (-1);
		return (n);
	}
	else
		return (m);
}
