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
	int i, n, m;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}

	if (i % 2 == 1)
	{
		n = (i - 1) / 2;
		m = n + 1;
	}
	else
	{
		n = i / 2;
		m = n;
	}

	for (; m <= i - 1; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
