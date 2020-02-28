#include "holberton.h"

/**
 * _strcmp - Compare strings.
 * @s1: String 1.
 * @s2: String 2.
 * Return: number.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}
