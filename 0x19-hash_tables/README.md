# README
### Description
C - Hash Tables
#### What I should learn:
- What is a hash function
- What makes a good hash function
- What is a hash table, how do they work and how to use them
- What is a collision and what are the main ways of dealing with collisions in the context of a hash table
- What are the advantages and drawbacks of using hash tables
- What are the most common use cases of hash tables

#### Requirements:
- Allowed editors: `vi`, `vim`, `emacs`
- All files compiled on Ubuntu 14.04 LTS
- All functions and files compiled with `gcc 4.8.4` using the flags `-Wall`, `-Werror`, `-Wextra`, and `-pedantic`
- Style: `Betty` style - `betty-style.pl`, and `betty-doc.pl`
- Now allowed to use global variables
- No more than 5 functions per file
- Allowed to use the C standard library
- Must create your own test files

#### Data structures for project:

```
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```
#### djb2 function
```    unsigned long
    hash(unsigned char *str)
    {
        unsigned long hash = 5381;
        int c;

        while (c = *str++)
            hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

        return hash;
    }
```

---
File | Description
-----|------------
0-hash\_table\_create.c | A function the creates a hash table. Returns a pointer to the newly created hash table, or `NULL` if something failed.
1-djb2.c | A hash function that implements the djb2 algorithm.
2-key\_index.c | A function that returns the index at which the key/value pair should be stored in the array of the hash table.
3-hash\_table\_set.c | A function that adds an element to the hash table. Returns `1` on success, or `0` on failure. In the case of a collision, the function adds a new node at the beginning of the list.
4-hash\_table\_get.c | A function that retrieves a value associated with a key. Returns the value associated with the element, or `NULL` if `key` couldn't be found.
5-hash\_table\_print.c | A function that prints a hash table, or nothing if the table is `NULL`.
6-hash\_table\_delete.c | A function that deletes a hash table

#### Author
Nicole Swanson - [@Nicolette\_Swan](https://twitter.com/Nicolette_Swan)
