#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
*_strlen - 0
*@s: char
*Return:: i
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
/**
*_strcpy - 0
*@src: src
*@dest: dest
*Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0, j;

	while (src[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
/**
*new_dog - 0
*@name: name
*@age: age
*@owner: owner
*Return: new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0;
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	if (name)
		i = _strlen(name);
	(*d).name = malloc((i + 1) * sizeof(char));
	if ((*d).name  == NULL)
	{
		free((*d).name);
		free(d);
		return (NULL);
	}
	if (owner)
		j = _strlen(owner);
	(*d).owner = malloc((j + 1) * sizeof(char));
	if ((*d).owner  == NULL)
	{
		free((*d).owner);
		free(d);
		return (NULL);
	}
	if (i)
		_strcpy((*d).name, name);
	else
		(*d).name[0] = '\0';
	if (j)
		_strcpy((*d).owner, owner);
	else
		(*d).owner[0] = '\0';
	(*d).age = age;
	return (d);
}
