#include "holberton.h"
/* file: 10-print_triangle.c*/
/**
 * print_triangle - prints a triangle
 *
 * @size: parameter of the print_triangle function
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, m;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (m = size - i; m > 0; m--)
			{
				_putchar(' ');
			}

			for (m = 0; m <= i; m++)
			{
				_putchar('#');
			}
			_putchar('\n');

		}
	}
	else
	{
		_putchar('\n');
	}

}
