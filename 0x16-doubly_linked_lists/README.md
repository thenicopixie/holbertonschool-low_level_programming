# README

### Description
C - Doubly linked lists
#### What I should learn:
- What is a doubly linked list
- How to use doubly linked lists

---
File | Description
-----|-----
0-print\_dlistint.c | A function to print all elements of a doubly linked list and returns the number of nodes.
1-dlistint\_len.c | A function that returns the number of elements in a doubly linked list.
2-add\_dnodeint.ci | A function that adds a new node at the beginning of a doubly linked list and returns the address of the new node.
3-add\_dnodeint\_end.c | A function that adds a new node to the end of a doubly linked list and returns the address of the new element, of `NULL` if failed.
4-free\_dlistint.c | A function that frees a doubly linked list.
5-get\_dnodeint.c | A function that returns the nth node of a doubly linked list. If the node does not exists, it returns `NULL`.
6-sum\_dlistint.c | A function that returns the sum of all the data (n) of a doubly linked list. If the list is empty, it returns `NULL`.
7-insert\_dnodeint.c | A function that inserts a new node at a given position into a doubly linked list. Return the address of the new node, or `NULL` if it failed. If it is not possible to add a new node at the given index, do not add the new node and return `NULL`.
8-delete\_dnodeint.c | A function that deletes a node at a given index from a doubly linked list. Returns 1 on success and -1 on failure.

### Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All files compiled on Ubuntu 14.04 LTS
- Programs and functions compiled with `gcc 4.8.4` using the flags `-Wall` `-Werror` `-Wextra` and `pedantic`
- All files should end with a newline
- Not allowed to use global variables
- The only C standard library functions allowed are: `malloc`, `free', `printf`, and `exit`
- Code style: Betty

#### Data structure for project:
```/**
     * struct dlistint_s - doubly linked list
     * @n: integer
     * @prev: points to the previous node
     * @next: points to the next node
     *
     * Description: doubly linked list node structure
     * for Holberton project
     */
typedef struct dlistint_s
{
        int n;
        struct dlistint_s *prev;
        struct dlistint_s *next;
} dlistint_t;```

#### Author
Nicole Swanson - [@Nicolette_Swan](https://twitter.com/Nicolette_Swan)
