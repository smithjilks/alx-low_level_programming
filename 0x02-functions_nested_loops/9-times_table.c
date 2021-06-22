#include "holberton.h"
/*file: 9-times_table.c*/
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
*/
void times_table(void)
{
	int i, n;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			if ((i * n) < 10)
			{
				if ((n * i) != 0  || n != 0)
					_putchar(' ');
				_putchar((i * n) + '0');
			}
			else
			{
				_putchar(((n * i) / 10)  + '0');
				_putchar(((n * i) % 10) + '0');
			}

			if (n != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
