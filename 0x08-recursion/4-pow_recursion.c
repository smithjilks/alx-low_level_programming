#include "holberton.h"
/**
 * _pow_recursion - returns x raised to the power of y
 *
 * @x: integer to be raised to y
 * @y: power to which to raise x
 *
 * Return: -1 if y is less than 0, the result x^y otherwise
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
