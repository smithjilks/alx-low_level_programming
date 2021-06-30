#include "holberton.h"
/*file: 5-string_toupper.c*/
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @str: string parameter
 *
 * Return: pointer to modified string char
 *
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 97 && *(str + i) <= 122)
			*(str + i) = 65 + (*(str + i) - 97);
		i++;
	}

	return (str);
}
