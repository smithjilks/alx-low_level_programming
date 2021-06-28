#include "holberton.h"
/*file: 9-strcpy.c.c*/
/**
 * _isdigit - checks for a digit 0 through 9
 *
 * @dest: parameter for the _strcpy function
 * @src: parameter for the _strcpy function
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (i >= 0)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
		i++;
	}

	return (dest);
}
