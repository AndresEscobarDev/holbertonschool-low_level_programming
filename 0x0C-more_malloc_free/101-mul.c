#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * _strcpy - function that copies the string.
 * @dest: Destiny.
 * @src: String.
 * Return: Always 0.
 */
void _strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i])
	{
		i++;
	}
	for (j = 0; j < i; j++)
		*(dest + j) = *(src + j);
	*(dest + i) = '\0';
	return;
}
/**
 * _puts - print string.
 * @str: string.
 * Return: Nothing.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
/**
 * _strlen - Leng of a string.
 * @s: The String.
 * Return: Always 0.
 */

int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i])
		i++;
	return (i);
}
/**
 * main - review if all the arguments are digits.
 * @argc: Last index of argv.
 * @argv: Pointer.
 * Return: 0 or 1.
 */
int digits(int argc, char **argv)
{
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
				return (1);
		}
	}
	return (0);
}
/**
 * voltear - swap.
 *@r: Strng or char.
 *@k: lengt.
 * Return: r.
 */
void voltear(char *r, int k)
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
	return;
}
/**
 * infinite_add - Sum giants numbers.
 *@n1:numero 1.
 *@n2:numero 2.
 *@r:resultado.
 *@size_r:comparador.
 * Return: r or 0.
 */
void infinite_add(char *n1, char *n2, char *r)
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
	voltear(r, k--);
}
/**
 * _realloc - function that reallocates a memory block using malloc and free.
 * @ptr: Old pointer.
 * @old_size: Old Size.
 * @new_size: New Size.
 * Return: n or NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n, *s = ptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
		return (malloc(new_size));
	if (ptr && new_size == 0)
	{
		free(ptr);
		return (0);
	}
	n = malloc(new_size);
	if (n == 0)
		return (0);
	while (i < old_size)
	{
		n[i] = s[i];
		i++;
	}
	free(ptr);
	return (n);
}
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: Number of members.
 * @size: Size of a member.
 * Return: NULL or pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i = 0;

	if (!nmemb || !size)
		return (0);
	s = (malloc(nmemb * size));
	if (s == 0)
		return (0);
	while (i < nmemb * size)
	{
		s[i] = '0';
		i++;
	}
	return (s);
}



int main(int argc, char *argv[])
{
	char **s, *r;
	int i, j, c, l, k, m, len1, len2;

	if (argc != 3 || digits(argc, argv))
		_puts("Error"), exit(98);
	len1 = _strlen(argv[1]), len2 = _strlen(argv[2]);
	s = malloc(len1);
	if (!s)
		_puts("Error"), exit(98);

	for (i = 0, c = 1, k = len1 - 1; i < len1; i++, c++, k--)
	{
		s[i] = _calloc(len2 + c + 1, sizeof(char));
		s[i][len2 + c] = 0;	
		for (j = len2, l = 0; j > 0; j--)
		{
			m = (((argv[1][k] - '0') * (argv[2][j - 1] - '0')) + l) % 10;
			l = (((argv[1][k] - '0') * (argv[2][j - 1] - '0')) + l) / 10;
			s[i][j] = m + '0';
			if (j == 1 && l > 0)
				s[i][j - 1] = l + '0';
		}
	}
	r = _calloc(len1 + len2 + 1, sizeof(char));
	if (!r)
		_puts("Error"), exit(98);
	if (len1 == 1)
		_strcpy(r, s[0]);
	else
	{
		_strcpy(r, s[0]);
		for(i = 1; i < len1; i++)
			infinite_add(r, s[i], r);
	}
	printf("%s\n", r);

	for (i = 0; i < len1; i++)
		free(s[i]);
	free(s);
	free(r);
	return (0);
}
