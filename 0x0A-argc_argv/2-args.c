#include <stdio.h>
#include <stdlib.h>
/*file: 2-args.c*/
/**
 * main - prints the arguments passed to it
 *
 * @argc:  number of aruguements passed to the program
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE otherwise
 *
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
