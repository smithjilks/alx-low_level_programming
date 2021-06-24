#include "holberton.h"
/* file: 4-print_most_numbers*/
/**
 * print_most_numbers - prints 0 to 9 followed by a new line
 * except 2 and 4
 *
 * Return: void
 *
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
