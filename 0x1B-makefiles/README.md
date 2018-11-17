# C - Makefiles

#### What I should learn
- What are `make`, Makefiles
- When, why and how to use Makefiles
- What are a rules and how to set and use them
- What are explicit and implicit rules
- What are the most common / useful rules
- What are variables and how to set and use them

### Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- OS: Ubuntu 14.04 LTS
- Version of `gcc`: 4.8.4
- Version of `make`: GNU Make 3.81

### Tasks
---
Files | Description
-----|------------
 0-Makefile | Create a Makefile
 1-Makefile | Create the variables `CC` and `SRC`
 2-Makefile | Create a usefule Makefile
 3-Makefile | Create more rules and variables
 4-Makefile | A complete Makefile
 5-island_perimeter.py | **Technical interview preparation** - Create a function `def island_perimeter(grid):` that returns the perimeter of the island described in `grid`
 
### More descriptions:

**#0 make -f 0-Makefile**
<details>
<summary></summary>
Requirements:

- name of the executable: `holberton`
- rules: `all`
  - The `all` rule builds your executable
- variables: none
</details>

**#1 make -f 1-Makefile**
<details>
<summary></summary>
Requirements:

- name of the executable: `holberton`
- rules: `all`
  - The all rule builds your executable
- variables: `CC`, `SRC`
  - `CC`: the compiler to be used
  - `SRC`: the `.c` files
</details>
<br>
**#2  make -f 2-Makefile**
<details>
<summary></summary>
Requirements:

- name of the executable: `holberton`
- rules: `all`
  - The `all` rule builds your executable
- variables: `CC`, `SRC`, `OBJ`, `NAME`
  - `CC`: the compiler to be used
  - `SRC`: the `.c` files
  - `OBJ`: the `.o` files
  - `NAME`: the name of the executable
- The `all` rule should recompile only the updated source files
- Not allowed to have a list of all the `.o` files
</details>
<br>
**#3 make -f 3-Makefile**
<details>
<summary></summary>
Requirements:
- name of the executable: `holberton`
- rules: `all`, `clean`, `oclean`, `fclean`, `re`
  - `all`: builds the executable
  - `clean`: deletes all Emacs and Vim temporary files along with the executable
  - `oclean`: deletes the object files
  - `fclean`: deletes the Emacs temporary files, the executable, and the object files
  - `re`: forces recompilation of all source files
- variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
  - `CC`: the compiler to be used
  - `SRC`: the `.c` files
  - `OBJ`: the `.o` files
  - `NAME`: the name of the executable
  - `RM`: the program to delete files
- The all rule should recompile only the updated source files
- The `clean`, `oclean`, `fclean`, `re` rules should never fail
- Not allowed to have a list of all the `.o` files
</details>
<br>
**#4 A complete Makefile**
<details>
<summary></summary>
Requirements:
- name of the executable: `holberton`
- rules: `all`, `clean`, `fclean`, `oclean`, `re`
  - `all`: builds the executable
  - `clean`: deletes all Emacs and Vim temporary files along with the executable
  - `oclean`: deletes the object files
  - `fclean`: deletes the Emacs temporary files, the executable, and the object files
  - `re`: forces recompilation of all source files
- variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
  - `CC`: the compiler to be used
  - `SRC`: the `.c` files
  - `OBJ`: the `.o` files
  - `NAME`: the name of the executable
  - `RM`: the program to delete files
  - `CFLAGS`: your favorite compiler flags: `-Wall` `-Werror` `-Wextra` `-pedantic`
- The all rule should recompile only the updated source files
- The `clean`, `oclean`, `fclean`, `re` rules should never fail

- Not allowed to have a list of all the `.o` files
</details>
<br>
**#5 Island perimeter**
<details>
<summary></summary>
- `grid` is a list of list of integers:
   - 0 represents a water zone
   - 1 represents a land zone
   - One cell is a square with side length 1
   - Grid cells are connected horizontally/vertically (not diagonally).
   - Grid is rectangular, width and height don’t exceed 100
- Grid is completely surrounded by water, and there is one island (or nothing).
- The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).

Requirements:
- First line contains `#!/usr/bin/python3`
- Not allowed to import any module
- Module and function must be documented
</details>
<br>
### Files
In the above tasks these files will be used. Compile these files only:

**main.c**
```
#include "m.h"

/**
 * main - Entry point
 *
 * Return: Always 
 */
int main(void)
{
	print_holberton();
	return (EXIT_SUCCESS);
}
```

**m.h**
```
#ifndef __M_H__
#define __M_H__

#include <stdlib.h>
#include <stdio.h>

void print_holberton(void);

#endif
```

**holberton.c**

```
#include "m.h"

/**
 * print_holberton - print the logo of Holberton
 *
 * Return: Nothing
 *
 * Learn more: https://www.holbertonschool.com
 */
void print_holberton(void)
{
	printf("j#0000000000000000000000000000000000000\n");
	printf("j#000000000000000000@Q**g00000000000000\n");
	printf("j#0000000000000000*]++]4000000000000000\n");
	printf("j#000000000000000k]++]++*N#000000000000\n");
	printf("j#0000000000000*C+++]++]++]J*0000000000\n");
	printf("j#00000000000@+]++qwwwp=]++++]*00000000\n");
	printf("j#0000000000*+++]q#0000k+]+]++]4#000000\n");
	printf("j#00000000*C+]+]w#0000*]+++]+]++0000000\n");
	printf("j#0000we+]wW000***C++]++]+]++++40000000\n");
	printf("j#000000000*C+]+]]+]++]++]++]+q#0000000\n");
	printf("j#0000000*]+]+++++++]++]+++]+++J0000000\n");
	printf("j#000000C++]=]+]+]+]++]++]+]+]+]=000000\n");
	printf("j#00000k+]++]+++]+]++qwW0000000AgW00000\n");
	printf("j#00000k++]++]+]+++qW#00000000000000000\n");
	printf("j#00000A]++]++]++]++J**0000000000000000\n");
	printf("j#000000e]++]+++]++]++]J000000000000000\n");
	printf("j#0000000A]++]+]++]++]++000000000000000\n");
	printf("j#000000000w]++]+]++]+qW#00000000000000\n");
	printf("j#00000000000w]++++]*0##000000000000000\n");
	printf("j#0000000000000Ag]+]++*0000000000000000\n");
	printf("j#00000000000000000we]+]Q00000000000000\n");
	printf("j#0000000000000@@+wgdA]+J00000000000000\n");
	printf("j#0000000000000k?qwgdC=]4#0000000000000\n");
	printf("j#00000000000000w]+]++qw#00000000000000\n");
	printf("\"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
}
```
