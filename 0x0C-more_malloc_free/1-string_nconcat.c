#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: String 1.
 * @s2: String 2.
 * @n: Bytes to copy.
 * Return: s or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, k, z;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j] && j < n)
		j++;
	z = i + j;
	s = malloc(z * sizeof(char));
	if (s == 0)
		return (0);
	for (k = 0; k < z; k++)
	{
		if (k < i)
			s[k] = s1[k];
		else
			s[k] = s2[k - i];
	}
	s[k] = 0;
	return (s);
}
