#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: a pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *arr;
	int len = 0;
	int i;

	if (str == NULL)
		return (NULL);

	while (*(str + len) != '\0')
	{
		len++;
	}

	arr = (char *) malloc(len * sizeof(char) + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		arr[i] = str[i];
	}

	arr[i] = '\0';

	return (arr);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: new_dog (dog_t)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *d_name, *d_owner;

	 d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d_name = _strdup(name);
	d_owner = _strdup(owner);

	if (d_name == NULL)
	{
		free(d_name);
		return (NULL);
	}
	if (d_owner == NULL)
	{
		free(d_owner);
		free(d);
		return (NULL);
	}

	d->name = d_name;
	d->age = age;
	d->owner = d_owner;
	return (d);
}
