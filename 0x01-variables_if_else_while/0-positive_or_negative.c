/**
 * author: Jilks Smith
 * 
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Prints whether a random number is positive,
 * negative or zero
 * 
 * Return: Always 0 (Success)
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
