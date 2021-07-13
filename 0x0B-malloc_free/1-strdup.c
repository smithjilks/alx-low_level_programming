#include "holberton.h"
#include <stdlib.h>
/*file: 1-strdup.c*/
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string to be duplicated
 *
 * Return: pointer to newly allocated space in memory
 */
char *_strdup(char *str)
{
	int i = 0, n;
	char *ar;

	if (str == NULL)
		return (NULL);

	while (*(str + i) != '\0')
	{
		i++;
	}

	ar = malloc(sizeof(char) * (i + 1));

	for (n = 0; n <= i; n++)
		ar[n] = str[n];

	return (ar);
}
