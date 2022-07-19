#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - this function iterates over an arr calling a function
 *@array: this is the pointer to the array that will be passed
 *@size: this is the size oof the arrat that is gotten
 *@action: this is this is a function pointer
 *Returns: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	int b;

	b = size;
	i = 0;
	while (i < b)
	{
		(*action)(*&array[i]);
		i++;
	}
}
