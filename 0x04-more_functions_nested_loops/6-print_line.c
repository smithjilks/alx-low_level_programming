#include "holberton.h"
/*file: 6-print_line*/
/**
 * print_line - draws a straight line on the terminal
 *
 * @n: parameter of the print_line function
 *
 * Return: void
 *
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
