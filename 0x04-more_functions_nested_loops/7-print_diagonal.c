#include "holberton.h"
/*file: 7-print_diagonal.c */
/**
 * print_diagonal - draws a diagonal line on th screen
 *
 * @n: parameter of the print_diagonal function
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int m;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (m = 0; m <= i; m++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
