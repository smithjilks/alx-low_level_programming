#include "holberton.h"
/*file: 2-strncpy.c*/
/**
 * _strncpy - copies a string
 *
 * @dest: string  destination paramter
 * @src: string source paramter
 * @n: number of bytes from source
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
	}

	return (dest);
}
