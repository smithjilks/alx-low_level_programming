/**
 * Auth: Jilks Smith
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints a random number
 * Classifies if it is positive, 
 * negative, or zero.
 *
 * Return: Always 0.
 */
int main(void)
{
int number;
srand(time(0));
number = rand() - RAND_MAX / 2;

if (number > 0)
    printf("%d is positive\n", number);
else if (number < 0)
    printf("%d is negative\n", number);
else
    printf("%d is zero\n", number);
return (0);
}
