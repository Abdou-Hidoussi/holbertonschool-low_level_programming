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
	int i;
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	for (i = 0; name[i] != '\n'; ++i)
	(*d).name = malloc(sizeof(i * (char) +1));
	if ((*d).name  == NULL)
	{
		free((*d).name);
		free(d);
		return (NULL);*
	}
	if ((*d).name)
		for (i = 0; name[i] != '\0'; ++i)
			(*d).name[i] = name[i];
	for (i = 0; name[i] != '\n'; ++i)
	(*d).owner = malloc(sizeof(i * (char) +1));
	if ((*d).owner  == NULL)
	{
		free((*d).owner);
		free(d);
		return (NULL);
	}
	if ((*d).owner)
		for (i = 0; owner[i] != '\0'; ++i)
			(*d).owner[i] = owner[i];
	(*d).age = age;

	return (d);
}
