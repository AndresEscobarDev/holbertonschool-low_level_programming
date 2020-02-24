#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, l, m;

	for (j = 0; needle[j]; j++)
		l = j;
	for (i = 0; haystack[i]; i++)
	{
		for (k = i, j = 0; haystack[k] == needle[j]; k++, j++)
		{
			if (j == l)
				m = i;
		}
		if (m == i)
			break;
	}
	if (m == i)
	{
		_putchar('R');
		return (&haystack[m]);
	}
	else
		return (&haystack[i]);
}
