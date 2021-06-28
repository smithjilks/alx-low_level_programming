#include "holberton.h"
/*file: 1-isdigit.c*/
/**
 * _strlen - checks for a digit 0 through 9
 *
 * @s: parameter for the _strlen function
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int n;

	n = 0;
	while (*(s + n) != '\0')
	{
		n++;
	}

	return (n);
}
