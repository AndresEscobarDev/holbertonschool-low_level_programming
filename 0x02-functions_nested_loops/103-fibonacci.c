#include <stdio.h>

/**
 * main - 50 de fibonacci.
 * Return: 0
 */

int main(void)
{
	unsigned long int n, m, o, p;

	m = 1;
	o = 1;
	n = 0;
	for (; m <= 4000000;)
	{
		p = m + o;
		m = o;
		o = p;
		if (m % 2 == 0)
		{
			n = n + m;
		}
	}
	printf("%lu\n", n);
	return (0);
}
