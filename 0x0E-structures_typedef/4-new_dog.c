#include "dog.h"
#include <stdio.h>

/**
 * new_dog - function that creates a new dog.
 *  @name: character pointer
 *  @owner: character pointer
 *  @age: integer
 *  Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int a, b, c;
	dog_t *doggy;

	for (a = 0; name[a] != '\0'; a++)
		;
	a++;
	for (b = 0; owner[b] != '\0'; b++)
		;
	b++;
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
	
	doggy->name = malloc(a * sizeof(doggy->name));
	if (doggy->name == 0)
		return (NULL);
	for (c = 0; c < a; c++)
		doggy->name[c] = name[c];

	doggy->age = age;

	doggy->owner = malloc(b * sizeof(doggy->owner));
	if (doggy->owner == 0)
		return (NULL);
	for (c = 0; c < b; c++)
		doggy->owner[c] = owner[c];
	doggy->owner[c] = owner[c];
	return (doggy);
i}
