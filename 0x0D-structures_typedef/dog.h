#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - structure holding name, age, and owner
 * @name: input name
 * @age: input age
 * @owner: input owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/* _putchar - function to print character */
int _putchar(char c);
/* init_dog - function to initialize a variable of type struct dog */
void init_dog(struct dog *d, char *name, float age, char *owner);
/* print_dog - print a struct dog */
void print_dog(struct dog *d);
/* new_dog - create a new dog (struct) */
dog_t *new_dog(char *name, float age, char *owner);
/* free_dog - free dog (struct) */
void free_dog(dog_t *d);

#endif /* _DOG_H */
