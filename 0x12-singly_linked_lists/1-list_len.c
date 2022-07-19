#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
size_t list_len(const list_t *h) {
	const list_t *temp = h;
	int i = 0;
	while (h != NULL)
	{
		temp = temp->next;
		i++;
	}
	
	return (i);
}
