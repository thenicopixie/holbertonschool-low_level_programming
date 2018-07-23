#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * _strlen - return length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	;

	return (length);
}
/**
 * _strcpy - copy string to buffer
 * @dest: destination
 * @src: string to copy
 * Return: pointer to buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * dog_t - original struct
 * new_dog - new struct
 * @name: name
 * @age: age
 * @owner: owner
 * Return: NULL if fail.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *cpy_name, *cpy_owner;
	int namelen, ownlen, i;
	
	if (new_dog->name == NULL)
		return (NULL);
	if (new_dog->user == NULL)
		reuturn (NULL);

	namelen = _strlen(dog_t.name);
	ownlen = _strlen(dog_t.owner);
	if (namelen == 0 || ownlen == 0)
		return (NULL);
	cpy_name = malloc(sizeof(char) * (namelen + 1));
	cpy_owner = malloc(sizeof(char) * (ownlen + 1));
	if (cpy_name == NULL || cpy_owner == NULL)
		return (NULL);
	for (i = 0; i < cpy_name; i++)
		cpy_name[i] = dog_t.name[i];
	cpy_name[i] = '\0';
	for (i = 0; i < cpy_owner; i++)
		cpy_owner = dog_t.owner[i];
	cpy_owner[i] = '\0';
}
