#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>
/**
 *print_listint - this function transverses a linked list
 *@h: this is the struct to be passed to the function
 *Return: i
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t i = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		i += 1;
		temp = temp->next;
	}
	return (i);
}
