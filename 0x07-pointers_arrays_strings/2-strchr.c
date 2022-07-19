#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strchr - thid function loops through a string to find a char
 *@s: string to be checked
 *@c: checked string
 *Return: NULL if pointer is found or
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s + i);

		}
		else if (*(s + i) == c)
		{
			return (s + i);
		}
		return (s + i);
		i++;
	}

	return (s + 1);
}
