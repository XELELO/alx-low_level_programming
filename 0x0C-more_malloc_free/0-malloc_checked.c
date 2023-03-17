#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - this functions asigns the value of the location
 *given to it in a malloc functions
 *@b: this is the memory size passed as a parameter
 *Return:s
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
