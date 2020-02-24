#include "holberton.h"
/**
 * set_string -  function that sets the value of a pointer to a char.
 * @s: pointer of pointer of string.
 * @to: dest of s.
 * Return: Nothing.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
