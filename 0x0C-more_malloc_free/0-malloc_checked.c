#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
/**
 *malloc_checked - this functions asigns the value of the location
 *given to it in a malloc functions
 *@b: this is the memory size passed as a parameter
 *Return:s
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		fprintf(stderr, "Error: malloc failed. %s\n", strerror(errno));
		exit(98);
	}
	return (ptr);
}
