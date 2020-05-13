#include "monty.h"

/**
 * parser - perses the file file_content
 * @file_name: file
 * Return: command
 */

char **parser(char *file_content, long int n)
{
	char **command;
	int i = 0;

	command = malloc(sizeof(char *) * n);
	if (command == NULL)
    {
        perror("Error: malloc failed");
        exit(EXIT_FAILURE)
    }

	command[i] = strtok(file_content, " \n");
	while (command[i] != NULL)
	{
		i++;
		command[i] = strtok(NULL, " \n");
	}
	return (command);
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
