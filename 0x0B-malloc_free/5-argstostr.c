#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: Number of args.
 * @av: Args.
 * Return: Null or s.
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, n = 0;

	if (ac == 0 || av == 0)
		return (0);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			n++;
	}
	s = malloc((ac + n + 1) * sizeof(char));
	if (s == 0)
		return (0);
	for (i = 0, n = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, n++)
			s[n] = av[i][j];
		s[n] = '\n';
		n++;
	}
	s[n] = 0;
	return (s);
}
