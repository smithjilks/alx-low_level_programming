#include "holberton.h"
/*file: 5-rev_string.c*/
/**
 * rev_string - reverses a string
 *
 * @s: parameter for the rev_string function
 *
 * Return: void
 */

void rev_string(char *s)
{

	int i, n, m;
	char temp;

	n = 0;
	while (*(s + n) != '\0')
	{
		n++;
	}

	for (i = 0; i < (n - 1); i++)
	{
		for (m = i + 1; m > 0; m--)
		{
			temp = *(s + m);
			*(s + m) = *(s + (m - 1));
			*(s + (m - 1)) = temp;
		}
	}
}
