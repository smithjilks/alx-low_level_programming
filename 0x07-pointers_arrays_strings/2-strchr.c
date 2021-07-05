#include "holberton.h"

/* file: 2-strchr.c*/
/**
 * _strchr - returns a pointer to the first accurrence
 * of the character c in the string
 *
 * @s : string in which to find the first occurrence of char c
 * @c : char to find in string s
 *
 * Return: pointer to the fist occurence of char c, NULL if not found
 *
 *
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}

		i++;
	}

	return ('\0');
}
