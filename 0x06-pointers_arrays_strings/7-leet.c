#include "holberton.h"
/*file: 7-leet.c*/
/**
 * leet - encodes a string to 1337
 *
 * @str: pointer string parameter
 *
 * Return: pointer to encoded string str
 */
char *leet(char *str)
{
	int i, j;
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int a[] = {52, 51, 48, 55, 49};

	j = 0;
	while (*(str + j) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(str + j) == lower[i] || *(str + j) == upper[i])
			{
				*(str + j) = a[i];
				break;
			}
		}
		j++;
	}

	return (str);
}
