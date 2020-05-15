#include "monty.h"

/**
 * read_f - open and reads file
 * @file_name: file name
 * Return: file file content
 */

char *read_f(char *file_name)
{
	FILE *fp;
	char *buffer;
	long int buf_size;
	struct stat st;

	if (stat(file_name, &st) == 0)
		buf_size = st.st_size;

	buffer = malloc(sizeof(char) * buf_size);
	if (!buffer)
	{
		perror("Error: malloc failed");
		exit(EXIT_FAILURE);
	}

	fp = fopen(file_name, "r");
	if (!fp)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file_name);
		exit(EXIT_FAILURE);
	}
	fread(buffer, sizeof(char), buf_size, fp);

	fclose(fp);
	return (buffer);
}

/**
 * parse_f - parse buffer
 * @file_name:file name
 * Return: file file content
 */

char **parse_f(char *file_name)
{
	char **commands;
	long int buf_size;
	char *buffer;
	struct stat st;
	int i = 0;

	if (stat(file_name, &st) == 0)
		buf_size = st.st_size;

	buffer = malloc(sizeof(char) * buf_size);
	commands = malloc(sizeof(char *) * buf_size);
	buffer = read_f(file_name);

	commands[i] = strtok(buffer, " \n");
	while (commands[i] != NULL)
	{
		i++;
		commands[i] = strtok(NULL, " \n");
	}
	return (commands);
}

int add_to_stack(char *file_name)
{
    stack_t **head;
    struct stat st;
    long int buf_size;
    char **commands;
    unsigned int i = 0;
    func_pointer exec_func;

    if (stat(file_name, &st) == 0)
		buf_size = st.st_size;

    head = malloc(sizeof(char) * buf_size);
    commands = malloc(sizeof(char *) * buf_size);
    commands = parse_f(file_name);
    while (commands[i] != NULL)
    {
        exec_func = get_op_func(commands[i]);

        exec_func(head, i);
        i++;
    }
    return (1);
}

func_pointer get_op_func(char *s)
{
    instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pint", _pint},
		{NULL, NULL}
    };
    int i;

    i = 0;
	while (ops[i].f != NULL && strcmp(ops[i].opcode, s) != 0)
	{
		i++;
	}
	return (ops[i].f);
}
