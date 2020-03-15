#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
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
 * @n: integer.
 * Return: Nothing.
 */
void fo_int(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 * fo_float - print float.
 * @n: character.
 * Return: Nothing.
 */
void fo_float(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * fo_string - print string.
 * @s: string.
 * Return: Nothing.
 */
void fo_string(va_list n)
{
	char *s = va_arg(n, char *);
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
	int i = 0, j = 0;
	va_list vl;
	fo_t fos[] = {
        {'c', fo_char},
        {'i', fo_int},
        {'f', fo_float},
        {'s', fo_string},
        {0, 0}
    };

	va_start(vl, format);
	while (format[i])
	{
		j = 0;
		while (fos[j].fo)
		{
			if (fos[j].fo == format[i])
			{
				fos[j].f(vl);
				if (format[i + 1])
					printf(", ");
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(vl);
}
