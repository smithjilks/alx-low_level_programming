#include "holberton.h"
/*file: 3-strcmp.c*/
/**
 * _strcmp - compares two strings
 *
 * @s1: first string parameter
 * @s2: second string parameter
 *
 * Return: 0 if the two strings are equal,
 * else difference of ascii values
 * of the first encountered non-equal characters
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i, n;

	i = 0;
	n = 0;
	while (n == 0)
	{
		if (s1[i] == '\0' &&  s2[i] == '\0')
			break;
		n = s1[i] - s2[i];
		i++;
	}

	return (n);
}
