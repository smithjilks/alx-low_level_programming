#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 *
 * @nmemb: number of elements of array
 * @size: size of array members
 *
 * Return: pointer to memory allocation,
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		*(a + i) = 0;

	return (a);
}
