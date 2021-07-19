#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - struct that holds a dog's info
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: struct "dog" stores the name, age and owner's name of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
