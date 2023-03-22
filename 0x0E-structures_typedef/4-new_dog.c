#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *new_dog - creates a new dog
 * @name: name parameter
 * @age: age parameter
 * @owner: owner parameter
 *
 * Return: lucy
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	int j;
	int k;
	dog_t *lucy;

	i = 0;
	j = 0;
	k = 0;

	while (name[i] != '\0')
	i++;
	while (owner[j] != '\0')
	j++;
	lucy = malloc(sizeof(dog_t));
	if (lucy == NULL)
	{
	free(lucy);
	return (NULL);
	}
	lucy->name = malloc(sizeof(lucy->name) * i);
	if (lucy->name == NULL)
	{
	free(lucy->name);
	free(lucy);
	return (NULL);
	}
	for (k = 0; k <= i; k++)
	lucy->name[k] = name[k];
	lucy->age = age;
	lucy->owner = malloc(sizeof(lucy->owner) * j);
	if (lucy->owner == NULL)
	{
	free(lucy->owner);
	free(lucy->name);
	free(lucy);
	return (NULL);
	}
	for (k = 0; k <= j; k++)
	lucy->owner[k] = owner[i];
	return (lucy);
}

