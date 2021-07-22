#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/*file: 2-print_strings.c*/
/**
 * print_strings - prints strings followed by a new line
 *
 * @separator: string to be printed between strings
 * @n: number of indefinite parameters
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);


	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ap);

}
