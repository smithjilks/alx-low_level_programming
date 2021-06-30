#include "holberton.h"
/*file: 4-rev_array.c*/
/**
 * reverse_array - reverses the contents of an array of integers
 *
 * @a: array pointer parameter
 * @n: number of elements in the array
 *
 * Return: void
 *
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
