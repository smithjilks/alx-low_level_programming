#include "holberton.h"
/*file: 1-isdigit.c*/
/**
 * _isdigit - checks for a digit 0 through 9
 *
 * @c: parameter for the _isdigit function
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	int val;

	val = c + '0';

	if (val >= 48 && val <= 57)
		return (1);
	return (0);
}
