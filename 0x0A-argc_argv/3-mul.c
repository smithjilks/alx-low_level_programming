#include <stdio.h>
#include <stdlib.h>
/*file: 3-mul.c*/
/**
 * main - prints multiplication of two arguments passed to it
 *
 * @argc:  number of aruguements passed to the program
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE otherwise
 *
 */

int main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	exit(EXIT_SUCCESS);
}
