#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: The dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
	{
		d = malloc(sizeof(struct dog));
		if (d == 0)
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
