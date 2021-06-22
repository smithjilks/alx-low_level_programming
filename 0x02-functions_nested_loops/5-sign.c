#include "holberton.h"
/*file: 5-sign.c*/
/**
 * print_sign - prints the sign of a number.
 *
 * @n: parameter for the print_sign function
 * Return: 1 if lowercase, 0 otherwise.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
