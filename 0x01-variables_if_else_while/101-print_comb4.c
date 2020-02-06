#include <stdio.h>
/**
 * main - numberz
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
			if (i != j && k != j)
			{
				if (j > i && k > j)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55 || j != 56 || k != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
