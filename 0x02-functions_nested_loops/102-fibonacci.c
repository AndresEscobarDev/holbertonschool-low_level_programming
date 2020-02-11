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
	for (n = 0; n < 51; n++)
	{
		p = m + o;
		m = o;
		o = p;
		printf("%lu", m);
		if (n < 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
