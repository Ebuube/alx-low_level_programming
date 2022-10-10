#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - data concerning a dog
 * @name: the name of the dog
 * @owner: the owner of the dog
 * @age: how long the dog has been alive
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
