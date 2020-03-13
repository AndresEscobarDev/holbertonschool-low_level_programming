#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: String between the numbers.
 * @n: Number of args.
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;

	if (n == 0)
		return;
	va_start(vl, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vl, int));
		if (i + 1 != n || !separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(vl);
}
