#include "holberton.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: String.
 * @accept: comparator.
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, l = 0;

	for (i = 0; i <= j; i++)
	{
		if (s[i] == ' ')
			break;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				l++;
		}
	}
	return (l);
}
