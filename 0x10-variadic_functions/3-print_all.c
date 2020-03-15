#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
/**
 * print_all - function that prints anything.
 * @format: format to print.
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list vl;
	unsigned int i = 0;
	char *s;

	va_start(vl, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(vl, int));
			break;
		case 'i':
			printf("%d", va_arg(vl, int));
			break;
		case 'f':
			printf("%f", va_arg(vl, double));
			break;
		case 's':
			s = va_arg(vl, char *);
			if (!s || !*s)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		default:
			break;
		}
		if (i + 1 != strlen(format) && (format[i] == 'c' ||
		format[i] == 's' || format[i] == 'i' || format[i] == 'f'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(vl);
}
