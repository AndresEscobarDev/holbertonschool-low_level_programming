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

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i != j)
			{
				if (j > i)
				{
					putchar(i);
					putchar(j);
					if (i != 56 || j != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}

			}
		}
	}
	putchar('\n');
	return (0);
}
