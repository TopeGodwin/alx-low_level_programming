#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog.
 *  @name: character pointer
 *  @owner: character pointer
 *  @age: integer
 *  Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int c, tname, towner;
	dog_t *doggy;

	doggy = malloc(sizeof(*doggy));
	if (doggy == NULL || !(name) || !(owner))
	{
		free(doggy);
		return (NULL);
	}

	for (tname = 0; name[tname]; tname++)
		;

	for (towner = 0; owner[towner]; towner++)
		;

	doggy->name = malloc(tname + 1);
	doggy->owner = malloc(towner + 1);

	if (!(doggy->name) || !(doggy->owner))
	{
		free(doggy->name);
		free(doggy->owner);
		free(doggy);
		return (NULL);
	}

	for (c = 0; c < tname; c++)
		doggy->name[c] = name[c];
	doggy->name[c] = '\0';

	doggy->age = age;

	for (c = 0; c < towner; c++)
		doggy->owner[c] = owner[c];
	doggy->owner[c] = '\0';

	return (doggy);
}
