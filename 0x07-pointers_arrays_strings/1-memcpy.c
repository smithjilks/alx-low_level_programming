#include "holberton.h"
/*file: 1-memcpy.c*/
/**
 * _memcpy - copies n bytes from memory area src to memory are dest
 *
 * @dest : memory area destination
 * @src : memory source
 * @n : number of bytes to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
