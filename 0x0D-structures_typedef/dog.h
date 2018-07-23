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
/* print_dog - print elements in struct */
void print_dog(struct dog *d);
/* dog_t - define a new type as a new name for the type struct dog */
#define dog_t struct dog

#endif /* _DOG_H */
