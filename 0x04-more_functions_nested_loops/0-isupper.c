#include "holberton.h"
/* file: 0-isupper.c */
/**
 * _isupper- checks for uppercase charcter
 *
 * @c: parameter for the _isupper function.
 *
 * Return: 1 if upper, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
