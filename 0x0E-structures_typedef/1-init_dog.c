#include "dog.h"
/*file: 1-init_dog.c*/
/**
 * init_dog - initializes a variable of type struct dog
 *
 * @d: struct dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner name.
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
