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
	int test = 0;

	if (d != 0)
	{
		test = (d->name[0] != '\0' && d->name != 0) ?
			printf("Name: %s\n", d->name) :
			printf("Name: (nil)\n");
		printf("Age: %.6f\n", d->age);
		test = (d->owner[0] != '\0' && d->owner != 0) ?
		printf("Owner: %s\n", d->owner) :
		printf("Owner: (nil)\n");
		test = test - 2;
	}
}
