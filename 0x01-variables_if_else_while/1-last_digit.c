#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - The last digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int o;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (o = n; o > 9 || o < -9;)
	{
		o = o % 10;
	}
	printf("Last digit of %d is %d", n, o);
	if (o > 5)
	{
		printf(" and is greater than 5\n");
	}
	else
		if (o == 0)
	{
		printf(" and is 0\n");
	}
	else
		printf(" and is less than 6 and not 0\n");
	return (0);
}
