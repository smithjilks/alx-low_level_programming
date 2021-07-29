#include "lists.h"
/*file: 1-list_len.c*/
/**
 * list_len - returns number of elements in a linked list_t list
 *
 * @h: singly linked list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h);
{
	size_t size;

	size = 0;
	while (h != null)
	{
		h = h->next;
		size++
	}

	return (size);
}
