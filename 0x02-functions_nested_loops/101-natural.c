#include "holberton.h"
#include <stdio.h>

/**
 * main - multiples of 3 and 5.
 * Return: 0
 */

int main(void)
{
	int n, s;

	s = 0;
	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			s = s + n;
		}
	}
	printf("%i\n", s);
}
