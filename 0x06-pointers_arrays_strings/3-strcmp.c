#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (i > j)
		return (15);
	else if (j > i)
		return (-15);
	else
		return (0);
}
