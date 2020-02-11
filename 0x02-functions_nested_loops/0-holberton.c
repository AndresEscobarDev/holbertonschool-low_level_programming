#include "holberton.h"
/**
 * main - Print Holberton
 *
 * Return: Always 0.
 */

int main(void)
{
	char str[9] = "Holberton";
	int x;

	for (x = 0; x < 9; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
	return (0);
}
