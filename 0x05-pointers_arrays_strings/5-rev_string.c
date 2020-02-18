#include "holberton.h"

/**
 * rev_string - change a string to reverse.
 * @s:String.
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int i, j;
	char n;

	i = 0;
	while (s[i])
		i++;
	i--;
	for (j = 0; j < i; j++)
	{
		n = s[i];
		s[i] = s[j];
		s[j] = n;
		i--;
	}
}
