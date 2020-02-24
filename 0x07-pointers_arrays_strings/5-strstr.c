#include "holberton.h"
/**
 * _strstr -  function that locates a substring.
 * @haystack: String.
 * @needle: Substring.
 * Return: NULL or haystack.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
		return (haystack);
	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (needle[i] != haystack[i])
				break;
			if (needle[i + 1] == 0)
				return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
