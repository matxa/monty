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
		exit(-1);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;
}

/**
 * pall - prints all int in the list
 * @head: head of the list
 * @n: line number
 */

void pall(stack_t **head, unsigned int n)
{
	const stack_t *last;
	int f = 0;
    (void) n;
    
    if (head == NULL)
        n = 0;

	while (*head)
	{
		printf("%d\n", (*head)->n);
		last = *head;
		*head = last->next;
		f++;
	}
}

/**
 * _pint - prints int at head of list
 * @head: head of list
 * @n: line number
 */

void _pint(stack_t **head, unsigned int n)
{
    if (head == NULL)
    {
        fprintf(stderr, "L%d: can't pint, stack empty\n", n);
        exit(EXIT_FAILURE);
    }
	printf("%d\n", (*head)->n);
}
