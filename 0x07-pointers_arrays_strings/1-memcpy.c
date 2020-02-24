#include "holberton.h"
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (n--; n + 1 > 0; n--)
	{
		dest[n] = src[n];
	}
	return (dest);
}
