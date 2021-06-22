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
				putchar((i * n) + '0');
			}
			else
			{
				putchar(((n * i) / 10)  + '0');
				putchar(((n * i) % 10) + '0');
			}

			if (n != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
