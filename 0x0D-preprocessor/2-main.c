#include <stdio.h>
/*file: 2-main.c*/
/**
 * main - prints the name of the file it was compiled from,
 * followed by a new line.
 *
 * Return: 0 always.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
