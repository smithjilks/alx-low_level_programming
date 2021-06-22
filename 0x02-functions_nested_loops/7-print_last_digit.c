#include "holberton.h"
/*file: 7-print_last_digit.c*/
/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: parameter for the _abs function
 * Return: n, the value of the last digit
*/
int print_last_digit(int n)
{
	if (n >= 0)
	{
		n = n % 10;
	}
	else
	{
		n = (n % 10) * -1;
	}

	_putchar(n + '0');
	return (n);
}
