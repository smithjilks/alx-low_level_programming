#include "holberton.h"
/*file: 1-print_rev_recursion.c*/
/**
 * _print_rev_recursion - prints a string in rev
 *
 * @s: string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
