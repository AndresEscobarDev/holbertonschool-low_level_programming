#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int p, i = 0, j = 0, k, s, l = 0;
	char n;

	while (n1[i])
		i++;
	while (n2[j])
		j++;
	i--;
	j--;
	for(k = 0; i >= 0 && j >=0; k++, i--, j--)
	{
		if ((n1[i] - '0' + n2[j] - '0' + l) > 9)
		{
			s = (n1[i] - '0' + n2[j] - '0' + l) % 10;
			l = (n1[i] - '0' + n2[j] - '0' + l) / 10;
		}
		else
		{
			s = n1[i] - '0' + n2[j] - '0' + l;
			l = 0;
		}
		r[k] = s + '0';
	}
		if (i >= 0)
		{
			for (;i >= 0; k++, i--)
			{
				if ((n1[i] - '0' + l) > 9)
				{
					s = (n1[i] - '0' + l) % 10;
					l = (n1[i] - '0' + l) / 10;
				}
				else
				{
					s = n1[i] - '0' + l;
					l = 0;
				}
				r[k] = s + '0';
			}
		}
		else if (j >= 0)
		{
			for (;j >= 0; k++, j--)
			{
				if ((n2[j] - '0' + l) > 9)
				{
					s = (n2[j] - '0' + l) % 10;
					l = (n2[j] - '0' + l) / 10;
				}
				else
				{
					s = n2[j] - '0' + l;
					l = 0;
				}
				r[k] = s + '0';
			}
		}
		if (l > 0)
		{
			r[k] = l + '0';
			k++;
		}
		r[k] = '\0';
		if (k >= size_r)
		{
			return (0);
		}
		else
		{
			k--;
			for (p = 0; p < k; p++)
			{
				n = r[k];
				r[k] = r[p];
				r[p] = n;
				k--;
			}
			return (r);
		}
}
