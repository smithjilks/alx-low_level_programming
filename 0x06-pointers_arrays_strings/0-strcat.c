#include "holberton.h"
/*file: 0-strcat.c*/
/**
 * _strcat - concatenates two strings
 *
 * @dest: pointer parameter of the _strcat function
 * @src: pointer paramter of the _strcat function
 *
 * Return: pointer to dest string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j >= 0)
	{
		*(dest + i) = *(src + j);

		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}

	return (dest);
}
