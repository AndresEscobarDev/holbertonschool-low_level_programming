#include "holberton.h"
/**
 * _strstr -  function that locates a substring.
 * @haystack: String.
 * @needle: Substring.
 * Return: NULL or haystack.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, l, m = -1;

	for (j = 0; needle[j]; j++)
		l = j;
	for (i = 0; haystack[i]; i++)
	{
		for (k = i, j = 0; haystack[k] == needle[j]; k++, j++)
		{
			if (j == l)
			{
				m = i;
				break;
			}
		}
		if (m == i)
			break;
	}
	if (m == i)
	{
		return (&haystack[m - 1]);
	}
	else
		return ('\0');
}
