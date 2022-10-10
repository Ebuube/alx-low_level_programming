#include "dog.h"

/**
 * init_dog - initializes the members of the struct dog
 * @d: pointer to struct dog
 * @name: pointer to the string name in struct dog
 * @age: the member age in struct dog
 * @owner: pointer to the string owner in struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
