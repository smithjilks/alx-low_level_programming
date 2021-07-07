#include "holberton.h"
/*file: 3-factorial.c*/
/**
 * factorial - returns factorial of a number
 *
 * @n : integer whoose factorial is to be found
 *
 * Return: -1 if n is lower than 0, factorial otherwise
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
