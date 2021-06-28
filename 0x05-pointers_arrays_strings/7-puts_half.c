#include "holberton.h"
/*file: 7-puts_half.c*/
/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: parameter for the _puts function
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, n;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}

	if (i % 2 == 1)
	{
		n = (i - 1) / 2;
	}
	else
	{
		n = i / 2;
	}

	for(; n <= i -1; n ++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
