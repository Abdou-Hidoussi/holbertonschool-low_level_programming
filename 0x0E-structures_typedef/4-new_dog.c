#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
*new_dog - 0
*@name: name
*@age: age
*@owner: owner
*Return: new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, t;
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	if (name)
		for (i = 0; name[i] != '\n'; ++i)
			;
	(*d).name = malloc((i + 1) * sizeof(char));
	if ((*d).name  == NULL)
	{
		free((*d).name);
		free(d);
		return (NULL);
	}
	if (owner)
		for (j = 0; owner[j] != '\n'; ++j)
			;
	(*d).owner = malloc((i + 1) * sizeof(char));
	if ((*d).owner  == NULL)
	{
		free((*d).owner);
		free(d);
		return (NULL);
	}
	if (name)
	{
		for (t = 0; t <= i + 1; ++t)
			(*d).name[t] = name[t];
	}
	if (owner)
	{
		for (t = 0; t <= j + 1; ++t)
			(*d).owner[j] = owner[j];
	}
	(*d).age = age;
	return (d);
}
