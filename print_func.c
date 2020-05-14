#include "monty.h"

/**
 * push - adds to the top of the stack
 * @head: head of the list
 * @n: integer value
 * Return: pointer to the node pushed
 */

stack_t *push(stack_t **head, const int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
		return (NULL);

    if (head == NULL)
    {
        *head->n = n;
    	*head->next = *head;
    	*head->prev = NULL;
    }

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;
	return (new_node);
}

/**
 * pall - prints all int in the list
 * @h: head of the list
 * Return: printed list
 */

size_t pall(const stack_t *h)
{
	const stack_t *last;
	int f = 0;

	while (h)
	{
		printf("%d\n", h->n);
		last = h;
		h = last->next;
		f++;
	}
	return (f);
}
