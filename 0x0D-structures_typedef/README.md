# README
## Description
### What I should learn
- What are structures, when, why and how to use them
- How to use `typedef`
---
File | Goal
---|---
dog.h | Define a new type `struct dog` with the following elements:
	- `name`, type = `char *`
	- `age`, type = `float`
	- `owner`, type = `char *`
1-init_dog.c | function that initialize a variable of type `struct dog`
2-print_dog.c | function that prints a `struct dog`
	- If an element of `d` is `NULL`, print `(nil)` instead of this element.
	- (if `name` is `NULL`, print `Name: (nil)`)
	- If `d` is `NULL` print nothing.
dog.h | Define a new type `dog_t` as a new name for the type `struct dog`
4-new_dog.c | Function that creates a new dog
	- Store a copy of `name` and `owner`
	- Return `NULL` if the function fails
5-free_dog.c | Function that frees dogs
### Author
**Nicole Swanson**
