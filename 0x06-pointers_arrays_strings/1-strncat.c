#include "holberton.h"
/*file: 1-strncat.c*/
/**
 * _strncat - concatenates two strings
 *
 * @dest: string destination pointer parameter
 * @src: string source pointer parameter
 * @n: number of bytes from source
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j < n)
	{
		*(dest + i) = *(src + j);

		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}

	return (dest);
}
