#include "holberton_pointers.h"
/*file: 0-print_name*/
/**
 * print_name - prints a name.
 *
 * @name: pointer to the name
 * @f : a function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
