#include "holberton.h"
/*file: 4-print_rev.c*/
/**
 * print_rev - prints a string in reverse, followe by a new line
 *
 * @s: parameter for the print_rev function
 *
 * Return: void
 */

void print_rev(char *s)
{
	int n;

	n = 0;
	while (*(s + n) != '\0')
	{
		n++;
	}

	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
