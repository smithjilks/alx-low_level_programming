#include "holberton.h"
#include <stdlib.h>
/*file: 3-array_range.c*/
/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 *@new_size: the new size, in bytes of the new memory block
 *
 * Return: pointer to new allocated pace
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (old_size == new_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
