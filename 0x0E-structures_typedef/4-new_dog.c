#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 * Return: d or NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int lenName, lenOwner, i = 0;

	d = malloc(sizeof(dog_t));
	if (d == 0)
		return (0);
	while (name[i])
		i++;
	lenName = i;
	i = 0;
	while (owner[i])
		i++;
	lenOwner = i;
	d->name = malloc(sizeof(char) * (lenName + 1));
	if (d->name == 0)
	{
		free(d);
		return (0);
	}
	d->owner = malloc(sizeof(char) * (lenOwner + 1));
	if (d->owner == 0)
	{
		free(d);
		free(d->name);
		return (0);
	}
	for (i = 0; name[i]; i++)
		d->name[i] = name[i];
	d->name[i] = 0;
	for (i = 0; owner[i]; i++)
		d->owner[i] = owner[i];
	d->owner[i] = 0;
	d->age = age;
	return (d);
}
