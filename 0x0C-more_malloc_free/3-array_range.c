#include "holberton.h"
#include <stdlib.h>
/*file: 3-array_range.c*/
/**
 * array_range - create an array of integers
 *
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to new allocated pace
 */
int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
		return (NULL);

	a = malloc(max - min + 1);

	if (a == NULL)
		return (NULL);

	for (i = 0; i <= (max - min + 1); i++)
		*(a + i) = min++;

	return (a);

}
