#include "function_pointers.h"
#include <stddef.h>
/*file: 1-array_iterator*/
/**
 * array_iterator - prints a name.
 *
 * @array: pointer to array
 * @size : size of array
 * @action: function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
		{
			(*action)(*(array + i));
		}
}
