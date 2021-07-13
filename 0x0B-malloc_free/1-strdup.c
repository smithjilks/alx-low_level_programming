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
	int i, j;
	char *ar;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	ar = (char *)malloc(sizeof(char) * (i + 1));

	if (ar == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		ar[j] = str[j];

	return (ar);
}
