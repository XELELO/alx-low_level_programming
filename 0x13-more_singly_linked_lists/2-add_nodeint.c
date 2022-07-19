#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *print_listint - this function transverses a linked list
 *@h: this is the struct to be passed to the function
 *Return: i
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *result =(listint_t *) malloc(sizeof(listint_t));
	result->n = n;
	result->next =*head;
	return (result);
}
