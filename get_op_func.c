#include "monty.h"

/**
* parser - perses the file file_content
* @file_name: file
* Return: command
*/

char *parser(char *file_content)
{
    char **command;
    char **tokens;
    int i = 0;

    tokens = strtok(file_content, ' ', '\n');
    while (tokens != NULL)
    {
        command[i] = *tokens;
        tokens = strtok(NULL, ' ', '\n');
        i++;
    }
    command[i+1] = '\0';
    return (command);
}

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: string
 * Return: correct function to perform the operation
 */

int (*get_op_func(char *s))(int, int)
{
    int i;

	instruction_t ops[] = {
        {"push", push},
        {"pall", pall},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].opcode != NULL)
	{
		if (*ops[i].opcode == *s && !(*(s + 1)))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
