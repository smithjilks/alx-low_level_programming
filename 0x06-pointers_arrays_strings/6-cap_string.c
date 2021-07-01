#include "holberton.h"
/*file: 6-cap_string.c*/
/**
 * cap_string - capitalizes all words of a string
 *
 * @str: string pointer paramter
 *
 * Return: pointer to the modifed string str
 *
 */

char *cap_string(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 97 && *(str + i) <= 122
		    && *(str + (i - 1)) == 32 && i != 0)
			*(str + i) = 65 + (*(str + i) - 97);

		if ((*(str + i) >= 97 && *(str + i) <= 122
		     && i == 0) || (*(str + (i - 1)) == 10))
			*(str + i) = 65 + (*(str + i) - 97);

		if ((*(str + i) >= 97 && *(str + i) <= 122
		     && i != 0) && (*(str + (i - 1)) == 9
				    || *(str + (i - 1)) == 46))
			*(str + i) = 65 + (*(str + i) - 97);

		i++;
	}

	return (str);
}
