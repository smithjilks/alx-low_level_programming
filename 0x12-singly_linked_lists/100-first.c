#include <stdio.h>
/**
 * func - function to print before main function is exected
 *
 * Return: void
 */

void __attribute__ ((constructor)) func()
{
	printf("You're beat! and yet,");
	printf("you must allow,\nI bore my house upon my back!\n");
}
