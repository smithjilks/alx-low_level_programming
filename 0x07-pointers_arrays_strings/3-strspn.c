#include "holberton.h"
/*file: 3-strspn.c*/
/**
 * _strspn - returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 *
 * @s : string parameter
 * @accept : bytes to compare in s
 *
 * Return: i, number of accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		n = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				n = 0;
				break;
			}
		}

		if (n == 1)
			break;
	}

	return (i);
}
