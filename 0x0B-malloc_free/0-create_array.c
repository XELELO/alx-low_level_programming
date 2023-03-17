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
	int i;
	char *array;

	i = 0;
	array = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		while (i < size)
		{
			array[i] = c;
			i++;
		}
	}
	return (NULL);
}
