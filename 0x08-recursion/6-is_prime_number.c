#include "holberton.h"
/*file: 6-is_prime_number*/

/**
 * check_prime_number - checks if a number is a prime number.
 * @n: number to be checked
 * @i: factor.
 * Return:  1 if prime number, 0 otherwise
 */
int check_prime_number(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + check_prime_number(n, i + 1));
}

/**
 * is_prime_number - returns 1 if n is a prime number, 0 otherwise
 *
 * @n: input number
 *
 * Return: 1 if prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 0)
		return (0);
	if (n == 1)
		return (0);
	return (check_prime_number(n, 2));
}
