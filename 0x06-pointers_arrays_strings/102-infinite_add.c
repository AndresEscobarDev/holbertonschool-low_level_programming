#include "holberton.h"

/**
 * voltear - swap.
 *@r: Strng or char.
 *@k: lengt.
 * Return: r.
 */
char *voltear(char *r, int k)
{
	char n;
	int p;

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
/**
 * infinite_add - Sum giants numbers.
 *@n1:numero 1.
 *@n2:numero 2.
 *@r:resultado.
 *@size_r:comparador.
 * Return: r or 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, s, l = 0, ic, jc;

	while (n1[i])
		i++;
	while (n2[j])
		j++;
	for (i--, j--, k = 0; i >= 0 || j >= 0; k++, i--, j--)
	{
		if (i >= 0)
			ic = n1[i] - '0';
		else
			ic = 0;
		if (j >= 0)
			jc = n2[j] - '0';
		else
			jc = 0;
		if ((ic + jc + l) > 9)
		{
			s = (ic + jc + l) % 10;
			l = (ic + jc + l) / 10;
		}
		else
		{
			s = ic + jc + l;
			l = 0;
		}
		r[k] = s + '0';
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
		return (voltear(r, k--));
}
