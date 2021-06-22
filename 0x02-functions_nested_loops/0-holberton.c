#include "holberton.h"
/*file: 0-holberton.c*/
/**
 * main - prints Holberton, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "Holberton";
	int i, n;

	n = (sizeof(str) / sizeof(str[0])) - 1;
	for (i = 0; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
