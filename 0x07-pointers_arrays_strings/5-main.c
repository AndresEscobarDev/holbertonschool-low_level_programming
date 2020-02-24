#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello, world jairo leon";
	char *f = "peo";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}
