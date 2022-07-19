#include "main.h"
#include <string.h>
/**
 *_memseet - this function sets a value to a memory location
 *Return: 0 always
 *
 */

void _memset(char*value, char b, int n)
{
	int i;

	i =0;
	for (; i<n; i++) {
		value[i]=b;
	}
}
