#include "holberton.h"

/**
 * _print_rev_recursion - function that prints a string in reverse..
 * @s:String.
 * Return: Void.
 */
void _print_rev_recursion(char *s)
{
	if (s[1])
		_print_rev_recursion(s + 1);
	_putchar(*s);
}
