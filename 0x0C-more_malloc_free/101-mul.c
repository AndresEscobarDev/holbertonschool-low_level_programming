#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
#include <ctype.h>
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
 * digits - review if all the arguments are digits.
 * @argc: Last index of nums.
 * @nums: Pointer.
 * Return: 0 or 1.
 */
int digits(int argc, char *nums[])
{
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; nums[i][j]; j++)
		{
			if (!isdigit(nums[i][j]))
				return (1);
		}
	}
	return (0);
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
 * main - multiply two numbers
 * @argc - Number of numbers.
 * @nums - Numbers.
 * Return: 98 || 0 .
 */
int main(int argc, char *nums[])
{
	int len1, len2, d1, d2, c, *r;

	if (argc != 3 || digits(argc, nums))
		_puts("Error"), exit(98);
	len1 = _strlen(nums[1]);
	len2 = _strlen(nums[2]);
	r = malloc((len1 + len2 + 1) * sizeof(int));
	if (!r)
		return (0);
	for (c = 0; c <= len1 + len2; c++)
		r[c] = 0;
	for (len1--; len1 >= 0; len1--)
	{
		d1 = nums[1][len1] - '0';
		for (len2 = _strlen(nums[2]) - 1, c = 0; len2 >= 0; len2--)
		{
			d2 = nums[2][len2] - '0';
			c += (d1 * d2) + r[len1 + len2 + 1];
			r[len1 + len2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			r[len1 + len2 + 1] += c;
	}
	c = 0;
	while (!r[c] && c < _strlen(nums[1]) + _strlen(nums[2]))
		c++;
	if (c == _strlen(nums[1]) + _strlen(nums[2]))
		_putchar('0');
	else
	{
		while (c < _strlen(nums[1]) + _strlen(nums[2]))
		{
			_putchar(r[c] + '0');
			c++;
		}
	}
	_putchar('\n');
	free(r);
	return (0);
}
