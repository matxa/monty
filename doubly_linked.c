#include "monty.h"

/**
 * free_dlistint - free or delete all nodes
 * @head: head
 *
 */

void free_dlistint(stack_t *head)
{
	stack_t *temp = NULL;

	if (head)
	{
		while ((temp = head) != NULL)
		{
			head = head->next;
			free(temp);

		}
	}
}
