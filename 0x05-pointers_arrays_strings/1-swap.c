#include "holberton.h"
/*file: 1-swap.c*/
/**
 * swap_int - swaps two integers
 *
 * @a: first parameter for the swap_int function
 * @b: second parameter for the swap_int funtion
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*b = *a;
	*a = temp;
}
