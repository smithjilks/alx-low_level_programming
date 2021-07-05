#include "holberton.h"
/*file: 5-strstr.c*/
/**
 * _strstr - finds the first occurrence of the substring needle
 * in string haystack
 *
 * @haystack:  main string
 * @needle: substring
 *
 * Return: pointer to the beginning of the located substring,
 * NULL if string is not found
 *
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*haystack != '\0' && *n != '\0'
		       && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack = h + 1;
	}
	return (0);
}
