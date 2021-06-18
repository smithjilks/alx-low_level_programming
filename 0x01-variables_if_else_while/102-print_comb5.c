#include <stdio.h>
/** file: 102-print_comb5.c*/
/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: Alwabs 0 (Success)
 */
int main(void)
{
	int a, b, c, d;

a = 48;
b = 48;
c = 48;
d = 49;
	while (a < 58)
	{
		while (b < 58)
		{
			while (c < 58)
			{
				while (d < 58)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (!(a == 57 && b == 56 && c == 57 && d == 57))
					{
						putchar(',');
						putchar(' ');
					}
					d++;
				}
				c++;
				d = 48;
			}
			b++;
			c = a;
			d = b + 1;
		}
		a++;
		b = 48;
		c = a;
		d = b + 1;
	}
	putchar('\n');
	return (0);
}
