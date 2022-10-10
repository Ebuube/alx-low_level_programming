#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a formatted form of the members of the struct dog
 * @d: the structure to print
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
