#include <stdio.h>
/**
 * main - prime factors.
 *
 * Return: Always 0.
 */
int main(void)
{
	long i, n, f, p;

	f = 0;
	n = 612852475143;
	p = 50829599;
	for (i = 2; i <= p; i++)
	{
		while (n % i == 0)
		{
			n = n / i;
			if (i > f)
				f = i;
		}
	}
	printf("%li\n", f);
	return (0);
}
