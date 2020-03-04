#include <stdlib.h>
#include <stdio.h>
/**
 * count - count the lenght of the string.
 * @str: String.
 * Return: n.
 */
int count(char *str)
{
	int i, n = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && str[i])
		{
			while (str[i] != ' ' && str[i])
				i++;
			n++;
		}
		if (str[i - 1] != ' ' && !str[i - 1] && i > 0)
			i--;
	}
	return (n);
}
/**
 * clean - free the memory.
 * @s: Double pointer to the strings.
 * @i: Counter.
 * Return: Nothing.
 */
void clean(char **s, int i)
{
	while (i >= 0)
	{
		free(s[i]);
		i--;
	}
	free(s);
}

/**
 * strtow - function that splits a string into words.
 * @str: String.
 * Return: s or NULL.
 */
char **strtow(char *str)
{
	char **s;
	int i, j = 0, k, n = count(str);

	i = 0;
	s = malloc((n + 1) * sizeof(char *));
	if (s == 0)
		return (0);
	while (*str)
	{
		if (*str == ' ')
			str++;
		else
		{
			k = 0;
			while (str[k] && str[k] != ' ')
				k++;
			s[i] = malloc(k * sizeof(char));
			if (s[i] == 0)
			{
				i--;
				clean(s, i);
				return (0);
			}
			for (j = 0; j <= k; j++)
			{
				s[i][j] = *str;
				str++;
				if (*str == ' ' || !*str)
				{
					s[i][j + 1] = 0;
					break;
				}
			}
			i++;
		}
	}
	s[i] = 0;
	return (s);
}
