#include <stdio.h>
/**
 * Program to print the name of the file it was compiled from
 */
int main (void)
{
	printf("%s\n", __FILE__);
}
