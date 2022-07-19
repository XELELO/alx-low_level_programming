#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: pointer to dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = strlen(dest);

	while (dest[i] != '\0')
	{
		dest[i] = dest[i];
		i++;
	}
	i = 0;
	j = strlen(dest);
	while (i < n)
	{
		dest[j] = src[i];
		j++, i++;
	}
	return (dest);
}
