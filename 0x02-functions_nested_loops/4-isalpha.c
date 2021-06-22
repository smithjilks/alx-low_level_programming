#include "holberton.h"
/*file: 4-isalpha.c*/
/**
 * _isalpha - checks for lowercase character.
 *
 * @c: parameter for the _isalpha function
 * Return: 1 if lowercase, 0 otherwise.
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return(0);
}
