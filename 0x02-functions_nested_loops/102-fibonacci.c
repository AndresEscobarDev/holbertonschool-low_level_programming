#include <stdio.h>

/**
 * main - 50 de fibonacci.
 * Return: 0
 */

int main(void)
{
	 unsigned long int n, m, o;

	m = 1;
	o = 2;
	for (n = 1; n < 51; n++)
	{
		printf("%lu", m);
		m = o;
		o = o + m;
		if (n < 49)
		{
			printf(", ");
		}
	}
	return (0);
}
