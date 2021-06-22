#include "holberton.h"
#include "holberton.h"
/*file: 1-alphabet.c*/
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: void.
*/

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
