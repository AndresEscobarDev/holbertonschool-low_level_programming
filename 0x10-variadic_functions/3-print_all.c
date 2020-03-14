#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
/**
 * fo_char - print char.
 * @c: character.
 * Return: Nothing.
 */
void fo_char(char c)
{
	printf("%c", c);
}
/**
 * fo_int - print int.
 * @n: integer.
 * Return: Nothing.
 */
void fo_int(int n)
{
	printf("%d", n);
}
/**
 * fo_float - print float.
 * @n: character.
 * Return: Nothing.
 */
void fo_float(float n)
{
	printf("%f", n);
}
/**
 * fo_string - print string.
 * @s: string.
 * Return: Nothing.
 */
void fo_string(char *s)
{
	if (!s || !*s)
	{
		printf("(nil)");
		return;
	}
		printf("%s", s);
}
/**
 * print_all - function that prints anything.
 * @format: format to print.
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list vl;
	unsigned int i = 0;

	va_start(vl, format);
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			fo_char(va_arg(vl, int));
			break;
		case 'i':
			fo_int(va_arg(vl, int));
			break;
		case 'f':
			fo_float(va_arg(vl, double));
			break;
		case 's':
			fo_string(va_arg(vl, char *));
			break;
		default:
			break;
		}
		if (i + 1 != strlen(format) && (format[i] == 'c' || 'i' || 'f' || 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(vl);
}
