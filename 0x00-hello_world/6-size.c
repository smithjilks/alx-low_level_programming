#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int myInt;
long int myLong;
long long int myLongLongInt;
char myChar;
float myFloat;

printf("Size of a char: %lu byte(s)\n", sizeof(myChar));
printf("Size of an int: %lu byte(s)\n", sizeof(myInt));
printf("Size of a long int: %lu byte(s)\n", sizeof(myLong));
printf("Size of a long long int: %lu byte(s)\n", sizeof(myLongLongInt));
printf("Size of a float: %lu byte(s)\n", sizeof(myFloat));
return (0);
}
