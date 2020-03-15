#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: Separator beetween strings.
 * @n: Number of strings.
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;
	char *s;

	if (!separator)
		separator = "";
	va_start(vl, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(vl, char *);
		if (!s)
			printf("(nil)");
		else
			printf("%s", s);
		if (i + 1 != n || !separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(vl);
}
