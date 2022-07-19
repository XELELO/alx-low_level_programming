#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
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
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++, i++;
	}
	dest[j] = '\0';
	return (dest);
}
