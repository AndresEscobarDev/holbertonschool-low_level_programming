#include "variadic_functions.h"
#include <stdio.h>
/**
 * fo_char - print char.
 * @c: character.
 * Return: Nothing.
 */
void fo_char(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * fo_int - print int.
 * @i: integer.
 * Return: Nothing.
 */
void fo_int(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 * fo_float - print float.
 * @f: character.
 * Return: Nothing.
 */
void fo_float(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * fo_string - print string.
 * @n: string.
 * Return: Nothing.
 */
void fo_string(va_list n)
{
	char *s = va_arg(n, char *);

	if (!s)
		s = "(nil)";
	printf("%s", s);
}
/**
 * print_all - function that prints anything.
 * @format: format to print.
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list vl;
	fo_t fos[] = {
		{'c', fo_char},
		{'i', fo_int},
		{'f', fo_float},
		{'s', fo_string},
		{0, 0}
	};
	char *s = "";
	va_start(vl, format);
	while (format && format[i])
	{
		j = 0;
		while (fos[j].fo)
		{
			if (fos[j].fo == format[i])
			{
				printf("%s", s);
				fos[j].f(vl);
				s = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(vl);
}
