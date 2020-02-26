#include "holberton.h"
/**
 * count - Returns length of string.
 * @s: String.
 * @n: iterator.
 * Return: 0 or 1.
 */
int count(char *s, int n)
{
	if (s[1])
	{
		n++;
		n += count(s + 1, 0);
	}
	return (n);
}
/**
 * palindrome - comparison.
 * @s: String.
 * @n: iterator.
 * @m: iterator.
 * Return: 0 or 1.
 */
int palindrome(char *s, int n, int m)
{
	if (n < m && s[n] == s[m])
	{
		n++;
		m--;
		if (!(n < m))
			return (1);
		return (palindrome(s, n, m));
	}
	return (0);
}

/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not.
 * @s: String.
 * Return: 0 or 1.
 */
int is_palindrome(char *s)
{
	int i;

	if (!*s)
	{
		_putchar('R');
		return (0);
	}
	i = count(s, 0);
	return (palindrome(s, 0, i));
}
