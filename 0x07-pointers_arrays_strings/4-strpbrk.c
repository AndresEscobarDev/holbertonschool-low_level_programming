#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, b = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				b = 1;
				break;
			}
		}
		if (b == 1)
			break;
	}
	return(&s[i--]);
}
