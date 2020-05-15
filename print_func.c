#include "monty.h"

/**
 * push - adds to the top of the stack
 * @head: head of the list
 * @n: integer value
 * Return: pointer to the node pushed
 */

void push(stack_t **head, unsigned int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
		return (-1);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;
}

/**
 * pall - prints all int in the list
 * @h: head of the list
 * Return: printed list
 */

void pall(stack_t **head, unsigned int n)
{
	const stack_t *last;
	int f = 0;

	while (h)
	{
		printf("node %d: %d\n", f, h->n);
		last = h;
		h = last->next;
		f++;
	}
}

/**
* _pint - prints int at head of list
* @head: head of list
* Return: 1 at success
*/

void _pint(stack_t **head, unsigned int n)
{
    printf("%d\n", h->n);
}
