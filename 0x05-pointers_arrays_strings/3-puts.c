#include "holberton.h"
/*file: 3-puts.c*/
/**
 * _puts - checks for a digit 0 through 9
 *
 * @str: parameter for the _puts function
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
