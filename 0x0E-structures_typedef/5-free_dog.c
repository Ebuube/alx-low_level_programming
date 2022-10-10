#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the memory assigned to a dog pointer
 * @d: the dog variable to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	d->name = 0;
	d->age = 0.0;
	d->owner = 0;
	free(d);
}
