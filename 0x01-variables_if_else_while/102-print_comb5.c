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
	int l;
	int m = -1;
	int n;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
		n = -1;
		m++;
		for (k = 48; k < 58; k++)
		{
		for (l = 48; l < 58; l++)
		{
		n++;
		if (n > m)
		{
		putchar(i);
		putchar(j);
		putchar(' ');
		putchar(k);
		putchar(l);
		if (i != 57 || j != 56 || k != 57 || l != 57)
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
