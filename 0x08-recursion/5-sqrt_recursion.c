#include "holberton.h"
/*file: 5-sqrt_recursion*/
/**
 * get_sqrt - returns the sqrt
 *
 * @n: number
 * @i: factor
 *
 * Return: n does not have a natural square root
 */

int get_sqrt(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (0 + get_sqrt(n, i + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number whose sqaure root is to be found
 *
 * Return: -1 if n does not have a natural square root, square root otherwise
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	return (get_sqrt(n, 2));
}
