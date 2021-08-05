#include "main.h"
/**
 * print_bin - recursive function
 * @n: number
 * Return: void
 */
void print_bin(unsigned long n)
{
	if (n == 0)
		return;

	print_bin(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	print_bin(n);
}
