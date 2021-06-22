#include "holberton.h"
/*file: 2-print_alphabet_x10.c*/
/**
 * print_alphabet_x10 - prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Return: void.
*/

void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	_putchar('\n');
	}
}
