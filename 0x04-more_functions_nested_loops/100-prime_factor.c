#include <stdio.h>
/* file: 100-prime_factor.c*/
/**
 * main - finds and prints the largest prime factor of the number 612852475143,
 * followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	long int i, n, f;

	n = 612852475143;
	for (i = 2; i <= n; i++)
	{
		if ((n % i) == 0)
		{
			n = n / i;
			f = i;
		}
	}
	printf("%ld \n", f);
	return (0);
}
