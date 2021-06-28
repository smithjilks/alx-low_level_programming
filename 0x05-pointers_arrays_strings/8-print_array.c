#include <stdio.h>
#include "holberton.h"
/*file: 8-print_array.c*/
/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 *
 * @a: array pointer parameter
 * @n: second parameter of
 *
 * Return: 1 if digit, 0 otherwise
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		printf("%d", *(a + i));

		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
