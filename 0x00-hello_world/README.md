# README
## Description
### What I should learn
- Why C programming is awesome
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
- What happens when you type `gcc main.c`
- What is an entry point
- What is `main`
- How to print text using printf, puts and putchar
- How to get the size of a specific type using the unary operator `sizeof`
- How to compile using `gcc`
- What is the default program name when compiling with `gcc`
- What is the official Holberton C coding style and how to check your code with `betty-style`
- How to find the right header to include in your source code when using a standard library function
- How does the `main` function influence the return value of the program
---
File | Goal
---|---
0-preprocessor | Script that runs a C file through the preprocessor and save the result into another file
1-compiler | Script that compiles a C file but does not link.
	- The C file name will be saved in the variable `$CFILE`
	- The output file should be named the same as the C file, but with the extension `.o` instead of `.c`
2-assembler | Script that generates the assembly code of a C code and save it in an output file
	- The C file name will be saved in the variable `$CFILE`
	- The output file should be named the same as the C file, but with the extension `.s` instead of `.c`
3-name | Script that compiles a C file and creates an executable named `cisfun`
	- The C file name will be saved in the variable `$CFILE`
4-puts.c | program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.
	- Use the function `puts`
	- not allowed to use `printf`
	- should end with the value `0`
5-printf.c | program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line
	- Use the function `printf`
	- not allowed to use the function `puts`
	- should return `0`
	- should compile without warning when using the `-Wall` `gcc` option
6-size.c | program that prints the size of various types on the computer it is compiled and run on
