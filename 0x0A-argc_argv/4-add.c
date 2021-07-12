#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*file: 4-add.c*/
/**
 * main - adds positive numbers
 *
 * @argc:  number of aruguements passed to the program
 * @argv: an array of pointers to the strings which are those arguments
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE otherwise
 *
 */

int main(int argc, char **argv)
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (EXIT_FAILURE);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (EXIT_SUCCESS);
}
