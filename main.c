#include "monty.h"

/**
 * main - main monty function
 * @argc: num of args
 * @argv: file to read from
 * Return: success or fail
 */

int main(int argc, char **argv)
{
	char *file_name;
	char *file_content;
    unsigned int i;
    char **hold_tokens;
	int c = 0;

	if (argc != 2)
	{
		perror("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file_name = argv[1];

	file_content = open_read_file(file_name);
    for (i = 0; i < file_size.st_size; i++)
    {
        printf("%c", file_content[i]);
    }

    hold_tokens = malloc(sizeof(char *) * 1024);
	if (hold_tokens == NULL)
		exit(-1);

	hold_tokens[i] = strtok(file_content, " \n");
	while (hold_tokens[i] != NULL)
	{
        printf("%d -> %s\n", c, hold_tokens[c]);
		c++;
		hold_tokens[i] = strtok(NULL, " \n");
	}
	return (1);
}
