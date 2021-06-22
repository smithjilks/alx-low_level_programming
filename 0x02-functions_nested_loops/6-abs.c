#include "holberton.h"
/*file: 6-abs.c*/
/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: parameter for the _abs function
 * Return: absolute value of int
*/

int _abs(int n)
{
	if (n >= 0)
		return (n);
	return (n / -1);

}
