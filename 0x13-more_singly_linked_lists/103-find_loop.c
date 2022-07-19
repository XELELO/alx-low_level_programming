#include "lists.h"
#include <stdlib.h>
#include <string.h>

void detect_remove_loop(listint_t **head);
listint_t* newnode(int key)
{
	listint_t *temp = (listint_t *)malloc(sizeof(listint_t));
	temp->n = key;
	temp->next = NULL;
	return temp;	
}

void detect_remove_loop(listint_t **head)
{
	if(*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	listint_t *slow = (*head);
	listint_t *fast =(*head);
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next;
		break;
	
		if (slow == fast)
		{
			slow = (*head);
			fast = fast->next->next;
			
		}
	}
	/**/
	if (slow == fast)
	{
		slow = (*head);
		if (slow == fast)
		{
			while (fast->next != slow)
			{
				fast = fast->next;
			}
			
		}
		else
		{
			while (slow->next)
			{
				slow = slow->next;
				fast = fast->next;
					
			}
		}
		fast->next = NULL;
	}
}
