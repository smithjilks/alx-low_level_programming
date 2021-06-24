#include "holberton.h"
/* file : 3-print_numbers.c*/
/**
 * print_numbers - prints 0 to 9 followed by a new line
 *
 * Return: void
 *
 */

void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
