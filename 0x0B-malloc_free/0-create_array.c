#include "holberton.h"
#include <stdlib.h>
/*file: 0-create_array*/
/**
 * create_array - create an array of chars and initializes it
 * with specific char
 *
 * @size: size of array
 * @c: character to be initialized into array of size size
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	i = 0;
	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
		return (NULL);

	while (i < size)
	{
		ar[i] = c;
		i++;
	}

	return (ar);
}
