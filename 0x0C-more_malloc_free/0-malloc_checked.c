#include "holberton.h"
#include <stdlib.h>
/*file: 0-malloc_checked.c*/
/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of memory to allocate
 *
 * Return: allocated memory pointer
 * if malloc fails, status value is 98.
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
