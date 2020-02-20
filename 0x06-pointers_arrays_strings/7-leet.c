#include "holberton.h"
/**
 * leet - leet letters.
 * @s: String.
 * Return: Always 0.
 */
char *leet(char *s)
{
	char l[5] = {'a', 'e', 'o', 't', 'l'};
	char L[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == l[j] || s[i] == L[j])
				s[i] = n[j];
		}
	}
	return (s);
}
