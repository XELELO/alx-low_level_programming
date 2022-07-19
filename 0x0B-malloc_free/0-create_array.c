#include "main.h"
#include <stdlib.h>

/**
 * create_array - function prototype
 * Description: Creates an array of size `size` and fill it with `c`
 * @size: The size of the array
 * @c: The character to fill the array with
 * Return: A pointer to an array of char
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (0);

	arr = malloc(size);

	if (arr == 0)
		return (0);

	while (size--)
	{
		arr[size] = c;
	}

	return (arr);
}
