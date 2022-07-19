#ifndef DOG_H
#define DOG_H

/**
 * struct list_s - this is a struct definition of a linked list
 * @str: character string
 * @len: this is the length of the linked
 * @next : this is the pointe to the net node in
 * the list or in some cases the null
*/
#include <stddef.h>
struct list_t
{
	char *str;
	unsigned int len;
	struct list_t *next;
};
typedef struct list_t list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif
