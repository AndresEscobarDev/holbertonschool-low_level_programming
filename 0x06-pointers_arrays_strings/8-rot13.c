#include "holberton.h"
/**
 * rot13 - rot13 code.
 * @s: String.
 * Return: s.
 */

char *rot13(char *s)
{
	char u1[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u2[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == u1[j])
		{
			s[i] = u2[j];
			break;
		}
		}
	}
	return (s);
}
