#include "holberton.h"
/**
 * get_endianness - function that checks the endianness.
 * Return: 1 (little endian) or 0 (big endian).
 */
int get_endianness(void)
{
	short i = 1;
	char *j = (char *)&i;

	if (j[0] == 1)
		return (1);
	else
		return (0);
}
