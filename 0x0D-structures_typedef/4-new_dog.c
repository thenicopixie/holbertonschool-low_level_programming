#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str);

/**
 * new_dog - copy struct
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new struct or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;

	if (name == NULL || owner == NULL)
		return (NULL);

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
	{
		return (NULL);
	}

/* copy values from name and owner to variables */
	nd->name = _strdup(name);

	if (name == NULL)
	{
		free(nd);
		return (NULL);
	}
	nd->owner = _strdup(owner);

	if (owner == NULL)
	{
		free(nd->name);
		free(nd);
		return (NULL);
	}
	nd->age = age;
	return (nd);
}
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to duplicated string, or NUll
 */
char *_strdup(char *str)
{
	int i, j;

	char *str_ptr;

/* check if str is NULL */
	if (str == NULL)
	{
		return (NULL);
	}
/* Get length of str */
	for (i = 0; str[i] != '\0'; i++)
	;
/* allocate memory to str_ptr */
	str_ptr = malloc(sizeof(char) * (i + 1));
/* check if str_ptr is NULL */
	if (str_ptr == NULL)
	{
		return (NULL);
	}
/* assign values from str to str_ptr */
	for (j = 0; j <= i; j++)
	{
		str_ptr[j] = str[j];
	}
	return (str_ptr);
}
