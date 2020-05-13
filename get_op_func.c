#include "monty.h"

/**
 * parser - perses the file file_content
 * @file_name: file
 * Return: command
 */

int parser(char *file_content)
{
	int i = 0;
    char *token = strtok(file_content, " \n");
	while (token != NULL)
	{
		i++;
		token = strtok(NULL, " \n");
        printf("%d: [%p] --- %s\n", i, token, token);
	}
    printf("\n");
    printf("The while loop counted %d tokens\n", i);
	return (1);
}

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: string
 * Return: correct function to perform the operation
 */

/**
 *int (*get_op_func(char *s))(int, int)
 *{
 *    int i;
 *
 *	instruction_t ops[] = {};
 *
 *	i = 0;
 *	while (ops[i].opcode != NULL)
 *	{
 *		if (*ops[i].opcode == *s && !(*(s + 1)))
 *			return (ops[i].f);
 *		i++;
 *	}
 *	return (NULL);
 *}
 */
